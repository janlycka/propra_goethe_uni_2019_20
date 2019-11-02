#ifndef GAMEOFLIFETAB_H
#define GAMEOFLIFETAB_H

#include <QWidget>

namespace Ui {
class gameOfLifeTab;
}

class gameOfLifeTab : public QWidget
{
    Q_OBJECT

public:
    explicit gameOfLifeTab(QWidget *parent = nullptr);
    ~gameOfLifeTab();

private:
    Ui::gameOfLifeTab *ui;
};

#endif // GAMEOFLIFETAB_H
