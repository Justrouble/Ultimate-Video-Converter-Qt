#ifndef UVCTABLEWIDGET_H
#define UVCTABLEWIDGET_H

#include <QTableWidget>

#include "conversionfile.h"

class UVCTableWidget : public QTableWidget
{
    Q_OBJECT

public:
    explicit UVCTableWidget(QWidget *parent = 0){parent++;}
    ~UVCTableWidget(){}

    void initalSetup(ConversionFile *cf)
    {
        int count = rowCount();
        setRowCount(count + 1);
        setItem(cf->outputFile, count, 0);
        connectFFMpegAndTableWidget(cf);
    }

    inline void setItem(const QString stringToWrite, int row, int index)
    {
        if (item(row, index) == 0x0)
        {
            QTableWidgetItem *item = new QTableWidgetItem(stringToWrite);
            item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
            QTableWidget::setItem(row, index, item);
            resizeColumnsToContents();
        }
        else
            item(row, index)->setText(stringToWrite);
    }

private slots:
    void setDuration(QString duration, int tableRow)
    {
        setItem(duration, tableRow, 2);
    }

    void setStatus(QString duration, int tableRow)
    {
        setItem(duration, tableRow, 1);
    }

private:
    void connectFFMpegAndTableWidget(ConversionFile* cfile)
    {
        connect(cfile, SIGNAL(durationChanged(QString, int)), this, SLOT(setDuration(QString, int)));
    }
};


#endif // UVCTABLEWIDGET_H
