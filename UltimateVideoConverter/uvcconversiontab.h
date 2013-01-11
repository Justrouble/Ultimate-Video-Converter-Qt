#ifndef UVCCONVERSIONTAB_H
#define UVCCONVERSIONTAB_H

#include <QTabWidget>
#include <QWidget>
#include <QMainWindow>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QLabel>
#include <QTableWidgetItem>

#include "conversionfile.h"

class UVCConversionTab : public QTabWidget
{
    Q_OBJECT

public:
    UVCConversionTab(ConversionFile *cf);
    ~UVCConversionTab();
    ConversionFile *cfile;

private:
    void setupUi();
    void deleteUi();
    QTextEdit *txtOutput;
    QGridLayout *mainLayout;

private slots:
    void outputCommand(QString k);
};

#endif // UVCCONVERSIONTAB_H
