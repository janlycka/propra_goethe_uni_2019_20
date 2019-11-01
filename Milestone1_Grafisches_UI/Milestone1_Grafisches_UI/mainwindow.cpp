#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytabpage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Rename Window Title
    this->setWindowTitle("Milestone 1");
    MyTabPage *gameOfLifeTab = new MyTabPage;
    MyTabPage *kryptografieTab = new MyTabPage;
    ui-> myTabWidget ->removeTab(0);
    ui-> myTabWidget ->removeTab(0);
    ui-> myTabWidget ->addTab(gameOfLifeTab, tr("Game Of Life"));
    ui-> myTabWidget ->addTab(kryptografieTab, tr("Kryptographie"));
    //myNewTab->functionDeclaredInMyTabPage (); //access parameters of myNewTab
}

MainWindow::~MainWindow()
{
    delete ui;
}

