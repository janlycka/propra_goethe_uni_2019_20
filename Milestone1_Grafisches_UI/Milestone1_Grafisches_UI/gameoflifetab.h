#ifndef GAMEOFLIFETAB_H
#define GAMEOFLIFETAB_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class gameOfLifeTab;
}

class gameOfLifeTab : public QWidget
{
    Q_OBJECT

public:
    explicit gameOfLifeTab(QWidget *parent = nullptr);
    ~gameOfLifeTab();

private slots:
    void on_startButton_clicked();

    void on_planeWidthSpinBox_valueChanged(int arg1);

    void on_planeHeightSpinBox_valueChanged(int arg1);

    void on_randomizeButton_clicked();

private:
    Ui::gameOfLifeTab *ui;
    QTimer *evolveTimer;
    bool evolveTimerActive = false;
};

#endif // GAMEOFLIFETAB_H
