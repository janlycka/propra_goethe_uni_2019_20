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

    void on_pushButton_3_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_ImportButton_clicked();

    void on_importbildbutton_clicked();

private:
    Ui::cryptographytab *ui;
};

#endif // CRYPTOGRAPHYTAB_H
