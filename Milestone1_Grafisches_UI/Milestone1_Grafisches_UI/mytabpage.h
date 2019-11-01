#ifndef MYTABPAGE_H
#define MYTABPAGE_H

#include <QDialog>

namespace Ui {
class MyTabPage;
}

class MyTabPage : public QDialog
{
    Q_OBJECT

public:
    explicit MyTabPage(QWidget *parent = nullptr);
    ~MyTabPage();

private:
    Ui::MyTabPage *ui;
};

#endif // MYTABPAGE_H
