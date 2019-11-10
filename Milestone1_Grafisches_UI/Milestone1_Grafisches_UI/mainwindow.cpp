#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytabpage.h"
#include <gameoflifetab.h>
#include <golwidget.h>
#include <cryptographytab.h>
#include <cryptowidget.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Rename Window Title
    this->setWindowTitle("Milestone 1");
    gameOfLifeTab *golTab = new gameOfLifeTab;
    cryptographytab *kryptografieTab = new cryptographytab;
    ui-> myTabWidget ->removeTab(0);
    ui-> myTabWidget ->removeTab(0);
    ui-> myTabWidget ->addTab(golTab, tr("Game Of Life"));
    ui-> myTabWidget ->addTab(kryptografieTab, tr("Kryptographie"));
    //myNewTab->functionDeclaredInMyTabPage (); //access parameters of myNewTab
}

MainWindow::~MainWindow()
{
    delete ui;
}

