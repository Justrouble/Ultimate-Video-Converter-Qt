#ifndef ADDFILE_H
#define ADDFILE_H

#include <QDialog>
#include <QFileDialog>
#include <QDir>
#include <QDebug>

#include "conversionfile.h"

namespace Ui {
class AddFile;
}

class AddFile : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddFile(QWidget *parent = 0);
    ~AddFile();

    ConversionFile *cf;

private slots:
    void on_cboxEasyProfile_currentIndexChanged(int index);
    void on_btnSelectFile_clicked();
    void on_buttonBox_accepted();
    void on_cboxVideoCodec_currentIndexChanged(const QString &arg1);
    void on_cboxMode_currentIndexChanged(int index);
    void on_btnSetOutputDirectory_clicked();

    void on_cboxContainer_currentIndexChanged(int index);

private:
    Ui::AddFile *ui;
    void changeCboxEnable(bool enable);
    QString processCodec(QString l);
    QString videoextension;
};

#endif // ADDFILE_H
