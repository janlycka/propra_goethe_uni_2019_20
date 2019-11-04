#ifndef GOLWIDGET_H
#define GOLWIDGET_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <string>

class GolWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GolWidget(QWidget *parent = nullptr);
    int widthC;
    int heightC;
    int cell_size;
    std::vector<short> cellVec;
    std::vector<short> updatedVec;

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
    // void paintPlane(QPainter &painter);
    void drawGrid(QPainter &painter);
    void drawCells(QPainter &painter);
    void clearPlane();
    short surroundCells(int xCoord, int yCoord);
    short evolveCell(int xCoord, int yCoord);
    void evolvePlane();
    void copyVec(std::vector<short> from, std::vector<short>& to);
    void randomize();
    void addHorizontalCells(int rowAmount=1);
    void addVerticalCells(int columnAmount=1);
    void fillWithBlank();
};

#endif // GOLWIDGET_H
