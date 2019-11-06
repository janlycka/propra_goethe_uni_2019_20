#include "cryptowidget.h"
#include "ui_cryptowidget.h"
#include <iostream>
#include <QMouseEvent>
#include <QColor>
#include <qmath.h>
#include <random>

cryptowidget::cryptowidget(QWidget *parent) :
    QWidget(parent),
    widthC(15),
    heightC(15),
    pixel_size(20)

{
    ui->setupUi(this);
}

