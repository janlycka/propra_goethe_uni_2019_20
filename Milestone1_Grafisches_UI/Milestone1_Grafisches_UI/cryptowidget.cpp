#include "cryptowidget.h"
#include <iostream>
#include <QMouseEvent>
#include <QColor>
#include <qmath.h>
#include <random>

cryptowidget::cryptowidget(QWidget *parent) :
    QWidget(parent),
    widthC(5),
    heightC(5),
    pixel_size(5)

{
    for (int i = 0; i < widthC*heightC; i++) {
        cellVec.push_back(0);
    }
    //ui->setupUi(this);
}

void cryptowidget::paintEvent(QPaintEvent *event)
{
    // https://stackoverflow.com/questions/24672146/qpainter-draw-line
    // https://www.youtube.com/watch?v=tc3nlNEAdig
    QPainter painter(this);
    drawGrid(painter);

    //QRect r(0,0,cell_size, cell_size);
    //painter.fillRect(r, QColor("black"));
    //cellVec.push_back(r);

    drawCells(painter);

}

void cryptowidget::drawCells(QPainter &painter)
{
    QPen grayPen(QColor("gray"));
    painter.setPen(grayPen);
    for (int x = 0; x < widthC; x++){
        for (int y = 0; y < heightC; y++){
            if (cellVec[x+y*heightC] == true){
                QRect r(x*pixel_size, y*pixel_size, pixel_size, pixel_size);
                painter.fillRect(r, QColor("black"));
                painter.drawRect(r);
            }
        }
    }
}

void cryptowidget:: drawGrid(QPainter &painter){
    int widthPlane = pixel_size * widthC;
    int heightPlane = pixel_size * heightC;

    for (int i = 0; i < widthC+1; i++){
        painter.drawLine(i*pixel_size, 0, i*pixel_size, heightPlane);
    }
    for (int i = 0; i < heightC+1; i++){
        painter.drawLine(0, i*pixel_size, widthPlane, i*pixel_size);
    }
}
