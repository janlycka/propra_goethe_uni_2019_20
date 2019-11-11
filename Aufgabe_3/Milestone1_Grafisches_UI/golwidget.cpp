#include "golwidget.h"
#include <iostream>
#include <QMouseEvent>
#include <QColor>
#include <qmath.h>
#include <ctime>
#include <cstdlib>

GolWidget::GolWidget(QWidget *parent) :
    QWidget(parent),
    cell_size(20)
{
    widthC = 16;
    heightC = 15;
    fillWithBlank();
}

/* Gameplane gets printed cell by cell. */
void GolWidget::printVec()
{
    for(int y = 0; y < heightC; y++){
        for(int x = 0; x < widthC; x++){
            std::cout << cellVec[x + y*widthC];
        }
        std::cout << std::endl;
    }
}

/* Paints every cell white by filling the vector with 0's for the beginning of the game and whenever width or height are changed. */
void GolWidget::fillWithBlank()
{
    cellVec.clear();
    for (int i = 0; i < widthC*heightC; i++) {
        cellVec.push_back(0);
    }
}

/* Fills up the vector with random values (0 or 1). */
void GolWidget::randomize()
{
    srand(time(0));
    for (short &i : cellVec) {
        i = (rand() % 2);
    }
    update();
}

/* This is the function where the plane is painted. */
void GolWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    drawGrid(painter);
    drawCells(painter);
}

/* Creates the grid structure by drawing lines. */
void GolWidget:: drawGrid(QPainter &painter){
    int widthPlane = cell_size * widthC;
    int heightPlane = cell_size * heightC;

    for (int i = 0; i < widthC+1; i++){
        painter.drawLine(i*cell_size, 0, i*cell_size, heightPlane);
    }
    for (int i = 0; i < heightC+1; i++){
        painter.drawLine(0, i*cell_size, widthPlane, i*cell_size);
    }
}

/* Paints the cells based on cellVec. */
void GolWidget::drawCells(QPainter &painter)
{
    QPen grayPen(QColor("gray"));
    painter.setPen(grayPen);
    for (int x = 0; x < widthC; x++){
        for (int y = 0; y < heightC; y++){
            if (cellVec[x+y*widthC] == 1){
                QRect r(x*cell_size, y*cell_size, cell_size, cell_size);
                painter.fillRect(r, QColor("black"));
                painter.drawRect(r);
            }
        }
    }
}

/* Changes every value in cellVec to 0 and calls the paintEvent in order to visualize the change. */
void GolWidget::clearPlane()
{
    for (int i = 0; i < widthC*heightC; i++){
        cellVec[i] = 0;
    }
    std::cout << "Cleared!\n";
    update();
}

/* Counts the amount of alive neighbouring cells of a given cell (by x and y coordinates) and returns that amount. */
short GolWidget::surroundCells(int xCoord, int yCoord)
{
    short upL, up, upR, l, r, botL, bot, botR;
            int leftX, rightX, topY, botY;

            // leftX and rightX
            if (xCoord == 0) {
                leftX = widthC-1;
                rightX = xCoord+1;
            } else {
                leftX = xCoord-1;
                rightX = (xCoord+1) % widthC;
            }

            // topY and botY
            if (yCoord == 0) {
                topY = (heightC-1)*widthC;
                botY = (yCoord+1)*widthC;
            } else {
                topY = (yCoord-1)*widthC;
                botY = ((yCoord+1) % heightC)*widthC;
            }

            // The eight sourrounding cells depending on leftX, rightX, topY and botY.
            upL =  cellVec[leftX + topY];
            up =   cellVec[xCoord + topY];
            upR =  cellVec[rightX + topY];
            l =    cellVec[leftX + (yCoord*widthC)];
            r =    cellVec[rightX + (yCoord*widthC)];
            botL = cellVec[leftX + botY];
            bot =  cellVec[xCoord + botY];
            botR = cellVec[rightX + botY];

            return upL + up + upR + l + r + botL + bot + botR;
}

/* Determines whether or not the cell at xCoord and yCoord dies, survives or gets created. Returns either 1 or 0. */
short GolWidget::evolveCell(int xCoord, int yCoord)
{
    short surrAmnt = surroundCells(xCoord, yCoord);

    // If cell is dead:
    if (cellVec[xCoord + yCoord*widthC] == 0) {
        if (surrAmnt == 3) {
            return 1;
        }
        else {return 0;}
    }
    // If cell is alive:
    else if (surrAmnt == 2 || surrAmnt == 3) {
        return 1;
    }
    else {return 0;}
}

/* Clears to(vector<short>) and copies all elements of from(vector<short>) to 'to'. */
void GolWidget::copyVec(std::vector<short> from, std::vector<short>& to)
{
    to.clear();
    for (short i : from) {
        to.push_back(i);
    }
}

/* Applies the 'evolveCell' function to every cell of the 'current' vector und pushes the result into the 'updated'
 * vector then copies the 'updated' vector to 'cellVec'.
 * Then updates the whole gameplane.
 */
void GolWidget::evolvePlane()
{
    for (int y = 0; y < heightC; y++) {
        for (int x = 0; x < widthC; x++) {
            updatedVec.push_back(evolveCell(x, y));
        }
    }
    copyVec(updatedVec, cellVec);
    updatedVec.clear();
    update();
}

/* Inverts the value of the cell when it is clicked and calls paintEvent. */
void GolWidget::mousePressEvent(QMouseEvent *event)
{
    int x = floor(event->x()/cell_size);
    int y = floor(event->y()/cell_size);
    std::cout << "X: " << x << std::endl << "Y: " << y << std::endl;


    if ((x <= widthC-1) && (y <= heightC-1)){
        std::cout << "in bounds!\n";

        short& clickedCell = cellVec[x + y*widthC];
        if (clickedCell == 0) {
            clickedCell = 1;
        } else {
            clickedCell = 0;
        }
        update();

    } else {
        std::cout << "Out of bounds!" << std::endl;
    }
}
