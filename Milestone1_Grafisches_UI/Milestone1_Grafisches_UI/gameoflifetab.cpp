#include "gameoflifetab.h"
#include "ui_gameoflifetab.h"
#include <iostream>
#include <QTimer>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

#include <QMessageBox>

gameOfLifeTab::gameOfLifeTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameOfLifeTab),
    evolveTimer(new QTimer(this)),
    evolveTimerDelay(100)
{
    ui->setupUi(this);

    ui->planeWidthSpinBox->setValue(ui->golWidget->widthC);
    ui->planeHeightSpinBox->setValue(ui->golWidget->heightC);
    connect(evolveTimer, SIGNAL(timeout()), ui->golWidget, SLOT(evolvePlane()));
    connect(ui->clearButton, SIGNAL(clicked()), ui->golWidget,SLOT(clearPlane()));
    connect(ui->evolveButton, SIGNAL(clicked()), ui->golWidget, SLOT(evolvePlane()));
}

gameOfLifeTab::~gameOfLifeTab()
{
    delete ui;
}

void gameOfLifeTab::on_startButton_clicked()
{
    if (evolveTimerActive == true) {
        evolveTimer->stop();
        evolveTimerActive = false;
        ui->startButton->setText("Start");

    } else {
        evolveTimer->start(evolveTimerDelay);
        evolveTimerActive = true;
        ui->startButton->setText("Stop");
    }
}

void gameOfLifeTab::on_planeWidthSpinBox_valueChanged(int arg1)
{
    GolWidget *gol = ui->golWidget;
    ui->golWidget->widthC = arg1;
    std::cout << "widthSpinBox>>> " << "width: " << gol->widthC << " height: " <<  gol->heightC << std::endl;
    ui->golWidget->fillWithBlank();
    ui->golWidget->update();
}

void gameOfLifeTab::on_planeHeightSpinBox_valueChanged(int arg1)
{
    GolWidget *gol = ui->golWidget;
    ui->golWidget->heightC = arg1;
    std::cout << "widthSpinBox>>> " << "width: " << gol->widthC << " height: " <<  gol->heightC << std::endl;
    ui->golWidget->fillWithBlank();
    ui->golWidget->update();
}

void gameOfLifeTab::on_randomizeButton_clicked()
{
    ui->golWidget->randomize();
}

void gameOfLifeTab::on_intervalSpinBox_valueChanged(int arg1)
{
    if (evolveTimerActive == true){
        evolveTimer->stop();
        evolveTimerDelay = arg1;
        evolveTimer->start(arg1);
    } else{
        evolveTimerDelay = arg1;
    }
}

void gameOfLifeTab::on_importButton_clicked()
{
    GolWidget *gol = ui->golWidget;
    QString readFile;
    QString importFilePath = QFileDialog::getOpenFileName(this, tr("Open Text file"), "/home", tr("Text files (*.txt)"));
    // QMessageBox::information(this, "mytitle", importFilePath);
    QFile importFile(importFilePath);

    // Stops further action if file could not be opened
    if (!importFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        std::cout << "File could not be opened" << std::endl;
        return;
    }

    // Sets widthC and heightC of golWidget to the first and second line of the txt file respectively
    gol->widthC = importFile.readLine().toInt();
    gol->heightC = importFile.readLine().toInt();
    ui->planeWidthSpinBox->setValue(gol->widthC);
    ui->planeHeightSpinBox->setValue(gol->heightC);

    // Read rest of the file containing the saved gameplane and pu onto the readFile variable
    while (!importFile.atEnd()) {
        readFile += importFile.readLine();
    }

    // Reset and fill the grid with the according to the imported file
    ui->golWidget->cellVec.clear();
    for (QChar i : readFile){
        if (i == 'o'){
            gol->cellVec.push_back(0);
        } else if(i == '*'){
            gol->cellVec.push_back(1);
        }
    }

    gol->update();
}

void gameOfLifeTab::on_exportButton_clicked()
{
    GolWidget *gol = ui->golWidget;

    int planeWidth = gol->widthC;
    int planeHeight = gol->heightC;
    QString exportFilePath = QFileDialog::getSaveFileName(this, tr("Select or create a Text file to save on"), "/home", tr("Text files (*.txt)"));
    QFile exportFile(exportFilePath);

    if(exportFile.open(QFile::WriteOnly)){
        QTextStream output(&exportFile);
        output << planeWidth << "\n" << planeHeight << "\n";

        for(int y = 0; y < planeHeight; y++){
            for(int x = 0; x < planeWidth; x++){
                short currentCell = gol->cellVec[x + y*planeWidth];
                if (currentCell == 0){
                    output << 'o';
                } else if(currentCell == 1){
                    output << '*';
                }
            }
            output << "\n";
        }
    } else{
        std::cout << "Unable to open file.";
    }
}
