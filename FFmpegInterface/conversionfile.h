#ifndef CONVERSIONFILE_H
#define CONVERSIONFILE_H

#include <QDir>

#include <QDebug>

#include "ffmpegprocess.h"

class ConversionFile : public FFmpegProcess
{
    Q_OBJECT

public:
    ConversionFile(){}
    ~ConversionFile(){}

    void convert();

    QString file;
    QString outputFile;

    bool start;
    QString extension;

    void initalSetup(QString f, QString outputD, QString VideoC, QString AudioC);

private:
    QString getFullOutputFile();

    QString outputDir;

    QString VideoCodec;

    QString AudioCodec;

    int tabIndex;

};

#endif // CONVERSIONFILE_H
