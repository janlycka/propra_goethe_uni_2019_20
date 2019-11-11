#ifndef CRYPTOGRAPHYTAB_H
#define CRYPTOGRAPHYTAB_H

#include <QWidget>
#include "kryptografie/nbild.h"
#include "kryptografie/cbild.h"

namespace Ui {
class cryptographytab;
}

class cryptographytab : public QWidget
{
    Q_OBJECT

public:
    explicit cryptographytab(QWidget *parent = nullptr);
    ~cryptographytab();

    QString imageFileName = "";
    QString keyFileName = "";
    QString state = "encode";
    NBild* main_bild;
    NBild* key_bild;
    CBild* encoded_bild;

private slots:

    void on_encodeButton_clicked();

    void on_createKeyButton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_ImportButton_clicked();

    void on_importbildbutton_clicked();

    void on_pushButton_clicked();

private:
    Ui::cryptographytab *ui;
};

#endif // CRYPTOGRAPHYTAB_H
