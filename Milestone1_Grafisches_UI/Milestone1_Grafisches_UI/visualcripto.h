#ifndef VISUALCRIPTO_H
#define VISUALCRIPTO_H

#include <QWidget>

namespace Ui {
class visualcripto;
}

class visualcripto : public QWidget
{
    Q_OBJECT

public:
    explicit visualcripto(QWidget *parent = nullptr);
    ~visualcripto();

private:
    Ui::visualcripto *ui;
};

#endif // VISUALCRIPTO_H
