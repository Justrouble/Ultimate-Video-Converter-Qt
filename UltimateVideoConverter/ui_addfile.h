/********************************************************************************
** Form generated from reading UI file 'addfile.ui'
**
** Created: Fri Jan 11 20:25:51 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILE_H
#define UI_ADDFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFile
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QComboBox *cboxMode;
    QComboBox *cboxEasyProfile;
    QLineEdit *txtOutputDir;
    QLineEdit *txtInputFile;
    QPushButton *btnSetOutputDirectory;
    QPushButton *btnSelectFile;
    QComboBox *cboxContainer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *cboxVideoCodec;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QComboBox *cboxAudioCodec;
    QLabel *label_2;
    QCheckBox *checkBox;

    void setupUi(QDialog *AddFile)
    {
        if (AddFile->objectName().isEmpty())
            AddFile->setObjectName(QStringLiteral("AddFile"));
        AddFile->setWindowModality(Qt::ApplicationModal);
        AddFile->resize(608, 277);
        gridLayout = new QGridLayout(AddFile);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(AddFile);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        tabWidget = new QTabWidget(AddFile);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cboxMode = new QComboBox(tab);
        cboxMode->setObjectName(QStringLiteral("cboxMode"));

        gridLayout_2->addWidget(cboxMode, 4, 0, 1, 1);

        cboxEasyProfile = new QComboBox(tab);
        cboxEasyProfile->setObjectName(QStringLiteral("cboxEasyProfile"));

        gridLayout_2->addWidget(cboxEasyProfile, 4, 1, 1, 1);

        txtOutputDir = new QLineEdit(tab);
        txtOutputDir->setObjectName(QStringLiteral("txtOutputDir"));
        txtOutputDir->setReadOnly(true);

        gridLayout_2->addWidget(txtOutputDir, 2, 0, 1, 2);

        txtInputFile = new QLineEdit(tab);
        txtInputFile->setObjectName(QStringLiteral("txtInputFile"));
        txtInputFile->setEnabled(true);
        txtInputFile->setReadOnly(true);

        gridLayout_2->addWidget(txtInputFile, 0, 0, 1, 2);

        btnSetOutputDirectory = new QPushButton(tab);
        btnSetOutputDirectory->setObjectName(QStringLiteral("btnSetOutputDirectory"));

        gridLayout_2->addWidget(btnSetOutputDirectory, 2, 3, 1, 1);

        btnSelectFile = new QPushButton(tab);
        btnSelectFile->setObjectName(QStringLiteral("btnSelectFile"));

        gridLayout_2->addWidget(btnSelectFile, 0, 3, 1, 1);

        cboxContainer = new QComboBox(tab);
        cboxContainer->setObjectName(QStringLiteral("cboxContainer"));

        gridLayout_2->addWidget(cboxContainer, 4, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        cboxVideoCodec = new QComboBox(tab_2);
        cboxVideoCodec->setObjectName(QStringLiteral("cboxVideoCodec"));

        gridLayout_3->addWidget(cboxVideoCodec, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        cboxAudioCodec = new QComboBox(tab_3);
        cboxAudioCodec->setObjectName(QStringLiteral("cboxAudioCodec"));

        gridLayout_4->addWidget(cboxAudioCodec, 1, 0, 1, 1);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        checkBox = new QCheckBox(AddFile);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);


        retranslateUi(AddFile);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddFile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddFile, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddFile);
    } // setupUi

    void retranslateUi(QDialog *AddFile)
    {
        AddFile->setWindowTitle(QApplication::translate("AddFile", "Add Conversion", 0));
        cboxMode->clear();
        cboxMode->insertItems(0, QStringList()
         << QApplication::translate("AddFile", "Easy Mode", 0)
         << QApplication::translate("AddFile", "Custom Mode", 0)
        );
        cboxEasyProfile->clear();
        cboxEasyProfile->insertItems(0, QStringList()
         << QApplication::translate("AddFile", "MP4 (MPEG4 + AAC)", 0)
         << QApplication::translate("AddFile", "MP4 (H.264 + AAC)", 0)
        );
        btnSetOutputDirectory->setText(QApplication::translate("AddFile", "Set Ouput Directory", 0));
        btnSelectFile->setText(QApplication::translate("AddFile", "Select File", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AddFile", "Input File and Mode", 0));
        label->setText(QApplication::translate("AddFile", "<html><head/><body><p align=\"center\">Video Codec</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AddFile", "Video Options", 0));
        label_2->setText(QApplication::translate("AddFile", "<html><head/><body><p align=\"center\">Audio Codec</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AddFile", "Audio Options", 0));
        checkBox->setText(QApplication::translate("AddFile", "Start conversion immediately", 0));
    } // retranslateUi

};

namespace Ui {
    class AddFile: public Ui_AddFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILE_H
