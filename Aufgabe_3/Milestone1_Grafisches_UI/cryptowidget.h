#ifndef CRYPTOWIDGET_H
#define CRYPTOWIDGET_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <string>
#include "kryptografie/nbild.h"


namespace Ui {
class cryptowidget;
}

class cryptowidget : public QWidget
{
    Q_OBJECT

public:
    explicit cryptowidget(QWidget *parent = nullptr);
    int widthC = 0;
    int heightC = 0;
    int pixel_size;
    std::vector<short> cellVec;
    QPainter * myPainter;
    NBild* nbild;
    //std::vector<short> updatedVec;


private:
    Ui::cryptowidget *ui;
    void paintEvent(QPaintEvent *event);
    //void mousePressEvent(QMouseEvent *event);

signals:

public slots:
    // void paintPlane(QPainter &painter);
    void drawGrid(QPainter &painter);
    void drawCells(QPainter &painter);
    void populateVector(NBild*);
    /*
    void clearPlane();
    short surroundCells(int xCoord, int yCoord);
    short evolveCell(int xCoord, int yCoord);
    void evolvePlane();
    void copyVec(std::vector<short> from, std::vector<short>& to);
    void randomize();
    void addHorizontalCells(int rowAmount=1);
    void addVerticalCells(int columnAmount=1);*/
};

#endif // CRYPTOWIDGET_H
