#ifndef CRYPTOGRAPHYTAB_H
#define CRYPTOGRAPHYTAB_H

#include <QWidget>

namespace Ui {
class cryptographytab;
}

class cryptographytab : public QWidget
{
    Q_OBJECT

public:
    explicit cryptographytab(QWidget *parent = nullptr);
    ~cryptographytab();

private:
    Ui::cryptographytab *ui;
};

#endif // CRYPTOGRAPHYTAB_H
