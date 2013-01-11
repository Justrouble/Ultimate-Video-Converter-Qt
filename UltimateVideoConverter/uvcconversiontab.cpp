#include "uvcconversiontab.h"

UVCConversionTab::UVCConversionTab(ConversionFile *cf)
{
    cfile = cf;
    if (!(cfile->status() == "Finished"))
        connect(cfile, SIGNAL(lineRead(QString)), this, SLOT(outputCommand(QString)));
    setupUi();
}

UVCConversionTab::~UVCConversionTab()
{
    deleteUi();
}

void UVCConversionTab::setupUi()
{
    txtOutput = new QTextEdit();
    mainLayout = new QGridLayout();
    txtOutput->setReadOnly(true);
    txtOutput->setText(cfile->buffer);
    mainLayout->addWidget(txtOutput, 0, 0, 1, 5);
    setLayout(mainLayout);
}

void UVCConversionTab::deleteUi()
{
    delete txtOutput;
    delete mainLayout;
}

void UVCConversionTab::outputCommand(QString cmdoutput)
{
    txtOutput->append(cmdoutput);
}
