#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    AddFile a(this);
    if(a.exec() == 1) {
        ConversionFile *cf = a.cf;
        listOfConversions.append(cf);
        ui->tableWidget->initalSetup(cf);
        if(cf->start) {
            cf->convert();
        }
    }
}

void MainWindow::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item) {
    int row = item->row();
    ConversionFile *cf = listOfConversions[row];
    UVCConversionTab *u = new UVCConversionTab(cf);
    ui->tabWidget->addTab(u, "Conversion");
}