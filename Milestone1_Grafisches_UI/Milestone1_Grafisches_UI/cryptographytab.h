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

private slots:
    void on_encodeButton_clicked();

    void on_createKeyButton_clicked();

    void on_decodeButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cryptographytab *ui;
};

#endif // CRYPTOGRAPHYTAB_H
