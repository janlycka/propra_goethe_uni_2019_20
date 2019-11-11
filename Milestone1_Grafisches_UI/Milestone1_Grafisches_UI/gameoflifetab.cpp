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

/* Starts or stops the 'evolveTimer' based on the 'evolveTimerActive' variable. */
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

/* Changes width of the gameplane. Sets every cells' state to 0. */
void gameOfLifeTab::on_planeWidthSpinBox_valueChanged(int arg1)
{
    GolWidget *gol = ui->golWidget;

    ui->golWidget->widthC = arg1;
    std::cout << "widthSpinBox>>> " << "width: " << gol->widthC << " height: " <<  gol->heightC << std::endl;
    ui->golWidget->fillWithBlank();
    ui->golWidget->update();
}

/* Changes height of the gameplane. Sets every cells' state to 0. */
void gameOfLifeTab::on_planeHeightSpinBox_valueChanged(int arg1)
{
    GolWidget *gol = ui->golWidget;

    ui->golWidget->heightC = arg1;
    std::cout << "widthSpinBox>>> " << "width: " << gol->widthC << " height: " <<  gol->heightC << std::endl;
    ui->golWidget->fillWithBlank();
    ui->golWidget->update();
}

/* Pseudo-randomly sets the state of every cell in the current gameplane to either 1 or 0. */
void gameOfLifeTab::on_randomizeButton_clicked()
{
    ui->golWidget->randomize();
}

/* Changes the speed at which the timer calls the 'evolvePlane' function. Speed changeable while timer is running. */
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

/* Opens a file dialog to let the user choose which file with a saved gameplane to load. */
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

    // Sets widthC and heightC of golWidget to the first and second line of the txt file respectively.
    gol->widthC = importFile.readLine().toInt();
    gol->heightC = importFile.readLine().toInt();
    ui->planeWidthSpinBox->setValue(gol->widthC);
    ui->planeHeightSpinBox->setValue(gol->heightC);

    // Read rest of the file containing the saved gameplane and assign to the readFile variable.
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

/* Opens a file dialogue to let the user choose/create a txt file to save the current state of the gameplane into. */
void gameOfLifeTab::on_exportButton_clicked()
{
    GolWidget *gol = ui->golWidget;

    //
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
