#include "mytabpage.h"
#include "ui_mytabpage.h"

MyTabPage::MyTabPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyTabPage)
{
    ui->setupUi(this);
}

MyTabPage::~MyTabPage()
{
    delete ui;
}
