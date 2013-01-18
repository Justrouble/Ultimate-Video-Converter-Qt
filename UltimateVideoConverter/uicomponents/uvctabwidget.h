#ifndef UVCTABWIDGET_H
#define UVCTABWIDGET_H

#include <QTabWidget>
#include <QTabBar>

class UVCTabWidget : public QTabWidget
{
    Q_OBJECT

public:
    explicit UVCTabWidget(QWidget *parent = 0) : QTabWidget(parent) { }
    ~UVCTabWidget(){}

    void addTab(QWidget *parent, QString title) {
        QTabWidget::addTab(parent, title);
        if(count() == 1) {
            tabBar()->setTabButton(0, QTabBar::RightSide, 0);
        }
    }
};

#endif // UVCTABWIDGET_H
