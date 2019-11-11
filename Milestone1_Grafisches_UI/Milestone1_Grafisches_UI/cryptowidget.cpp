#include "cryptowidget.h"
#include <iostream>
#include <QMouseEvent>
#include <QColor>
#include <qmath.h>
#include <random>

cryptowidget::cryptowidget(QWidget *parent) :
    QWidget(parent),
    //widthC(5),
    //heightC(5),
    pixel_size(5)

{
    /*for (int i = 0; i < widthC*heightC; i++) {
        cellVec.push_back(0);
    }*/
    //ui->setupUi(this);
}

void cryptowidget::paintEvent(QPaintEvent *event)
{
    // https://stackoverflow.com/questions/24672146/qpainter-draw-line
    // https://www.youtube.com/watch?v=tc3nlNEAdig
    QPainter painter(this);
    //myPainter = &painter;
    //drawGrid(painter);

    //QRect r(0,0,cell_size, cell_size);
    //painter.fillRect(r, QColor("black"));
    //cellVec.push_back(r);

    drawCells(painter);

}

void cryptowidget::drawCells(QPainter &painter)
{
    QPen grayPen(QColor("gray"));
    painter.setPen(grayPen);


    int max = 300;
    int newHeight = max;
    int newWidth = max;
    double shrinkfactor = 1;

    if(widthC<heightC){
        newHeight = max;
        shrinkfactor = (double)max/(double)heightC;
        newWidth = shrinkfactor*widthC;
    } else {
        newWidth = max;
        shrinkfactor = (double)max/(double)widthC;
        newHeight = shrinkfactor*heightC;
    }

    painter.drawLine(0, 0, newWidth, 0);
    painter.drawLine(0, 0, 0, newHeight);
    painter.drawLine(newWidth, 0, newWidth, newHeight);
    painter.drawLine(0, newHeight, newWidth, newHeight);

    double pxsize = shrinkfactor<1 ? 1 : shrinkfactor;

    for (int x = 0; x < widthC; x++){
        for (int y = 0; y < heightC; y++){
            if (nbild->image_data[y][x] == true){
               // painter.fillRect(r, QColor("black"));
            } else {
                QRect r(x*shrinkfactor, y*shrinkfactor, pxsize, pxsize);
                painter.fillRect(r, QColor("black"));
                painter.drawRect(r);
            }
        }
    }
}

void cryptowidget::populateVector(NBild* myNbild)
{
    nbild = myNbild;

    heightC = nbild->height;
    widthC = nbild->width;
/*
    std::cout<<heightC;

    for (int i = 0; i < widthC*heightC; i++) {
        cellVec.push_back(0);
    }

    for (int x = 0; x < widthC; x++){
        for (int y = 0; y < heightC; y++){
            cellVec[y+x*widthC] = nbild->image_data[x][y];
        }
    }*/

    this->update();
}

void cryptowidget:: drawGrid(QPainter &painter){

    int newHeight = 150;
    int newWidth = 150;
    double shrinkfactor = 1;

    if(widthC<heightC){
        newHeight = 150;
        shrinkfactor = (double)150/(double)heightC;
        newWidth = shrinkfactor*widthC;
    } else {
        newWidth = 150;
        shrinkfactor = (double)150/(double)widthC;
        newHeight = shrinkfactor*heightC;
    }

    for (int i = 0; i < newHeight; i++){
        painter.drawLine(i*shrinkfactor, 0, i*shrinkfactor, newHeight);
    }
    for (int i = 0; i < newWidth; i++){
        painter.drawLine(0, i*shrinkfactor, newWidth, i*shrinkfactor);
    }
}
