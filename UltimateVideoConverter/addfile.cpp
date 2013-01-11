#include "addfile.h"
#include "ui_addfile.h"

AddFile::AddFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFile)
{
    cf = new ConversionFile();

    ui->setupUi(this);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    ui->txtOutputDir->setText(QDir::homePath());

    on_cboxMode_currentIndexChanged(0);
    on_cboxEasyProfile_currentIndexChanged(0);
}

AddFile::~AddFile()
{
    delete ui;
}

void AddFile::changeCboxEnable(bool enable)
{
    ui->cboxContainer->setEnabled(enable);
    ui->cboxVideoCodec->setEnabled(enable);
    ui->cboxAudioCodec->setEnabled(enable);
}

void AddFile::on_cboxEasyProfile_currentIndexChanged(int index)
{
    QStringList l;
    if(index == 0 || index == 1)
        l << "MP4";
    ui->cboxContainer->clear();
    ui->cboxContainer->addItems(l);
    ui->cboxContainer->setCurrentIndex(0);
    if(index == 0 || index == 1)
        ui->cboxVideoCodec->setCurrentIndex(index);
}

void AddFile::on_btnSelectFile_clicked()
{
    QFileDialog k(this);
    QString fileName = k.getOpenFileName(this, tr("Add File"),
                                                     "",
                                                     tr("Files (*.*)"));
    if(fileName != 0)
    {
        ui->txtInputFile->setText(fileName);
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
    }
}

void AddFile::on_buttonBox_accepted()
{
    cf->extension = videoextension;
    cf->start = ui->checkBox->isChecked();
    cf->initalSetup(ui->txtInputFile->text(), ui->txtOutputDir->text(), processCodec(ui->cboxVideoCodec->currentText()), processCodec(ui->cboxAudioCodec->currentText()));
}

QString AddFile::processCodec(QString codec)
{
    QString firstTemp = codec;
    return firstTemp.remove(0, firstTemp.indexOf("(") + 1).remove(")").trimmed();
}

void AddFile::on_cboxVideoCodec_currentIndexChanged(const QString &arg1)
{
    QStringList l;
    if(arg1 == "MPEG 4 - Part 2 (mpeg4)" || arg1 == "H.264 (libx264)")
        l << "AAC (aac)";
    ui->cboxAudioCodec->clear();
    ui->cboxAudioCodec->addItems(l);
    ui->cboxAudioCodec->setCurrentIndex(0);
}

void AddFile::on_cboxMode_currentIndexChanged(int index)
{
    bool easymode = (index == 0);
    changeCboxEnable(!easymode);
    ui->cboxEasyProfile->setVisible(easymode);
}

void AddFile::on_btnSetOutputDirectory_clicked()
{
    QString tempSave = QFileDialog::getExistingDirectory(this, "Open Directory",
                                                         ui->txtOutputDir->text(),
                                                         QFileDialog::ShowDirsOnly);
    ui->txtOutputDir->setText(tempSave);
}

void AddFile::on_cboxContainer_currentIndexChanged(int index)
{
    QStringList l;
    if(index == 0)
    {
        l << "MPEG 4 - Part 2 (mpeg4)" << "H.264 (libx264)";
        videoextension = ".mp4";
    }
    ui->cboxVideoCodec->clear();
    ui->cboxVideoCodec->addItems(l);
    ui->cboxVideoCodec->setCurrentIndex(0);
}
