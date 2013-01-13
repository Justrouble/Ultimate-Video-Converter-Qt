#include "uvcconversiontab.h"

UVCConversionTab::UVCConversionTab(ConversionFile *cf) : QTabWidget()
{
    cfile = cf;
    if (!(cfile->status() == "Finished"))
        connect(cfile, &ConversionFile::lineRead, this, &UVCConversionTab::outputCommand);
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
