#ifndef VISUELLECRIPTOGRAPHYTAB_H
#define VISUELLECRIPTOGRAPHYTAB_H

#include <QDialog>

namespace Ui {
class visuellecriptographytab;
}

class visuellecriptographytab : public QWidget
{
    Q_OBJECT

public:
    explicit visuellecriptographytab(QWidget *parent = nullptr);
    ~visuellecriptographytab();

private:
    Ui::visuellecriptographytab *ui;
};

#endif // VISUELLECRIPTOGRAPHYTAB_H
