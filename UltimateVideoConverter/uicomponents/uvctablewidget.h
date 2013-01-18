#ifndef UVCTABLEWIDGET_H
#define UVCTABLEWIDGET_H

#include <QTableWidget>

#include "conversionfile.h"

class UVCTableWidget : public QTableWidget
{
    Q_OBJECT

public:
    explicit UVCTableWidget(QWidget *parent = 0) : QTableWidget(parent){ }
    ~UVCTableWidget(){}

    void initalSetup(ConversionFile *cf) {
        int count = rowCount();
        setRowCount(count + 1);
        setItem(cf->outputFile, count, 0);
        connectFFMpegAndTableWidget(cf);
    }

    inline void setItem(const QString stringToWrite, int row, int index) {
        if (item(row, index) == 0x0) {
            QTableWidgetItem *item = new QTableWidgetItem(stringToWrite);
            item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
            QTableWidget::setItem(row, index, item);
            resizeColumnsToContents();
        } else {
            item(row, index)->setText(stringToWrite);
        }
    }

private slots:
    void setStatus(QString status, int tableRow) {
        setItem(status, tableRow, statusColumn);
    }

    void setDuration(QString duration, int tableRow) {
        setItem(duration, tableRow, durationColumn);
    }

private:
    void connectFFMpegAndTableWidget(ConversionFile *cfile) {
        connect(cfile, &ConversionFile::statusChanged, this, &UVCTableWidget::setStatus);
        connect(cfile, &ConversionFile::durationChanged, this, &UVCTableWidget::setDuration);
    }

    enum tableColumn {
        statusColumn = 0,
        durationColumn = 1
    };
};


#endif // UVCTABLEWIDGET_H
