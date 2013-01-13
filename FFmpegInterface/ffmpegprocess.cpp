#include "ffmpegprocess.h"

#include <QDebug>

void FFmpegProcess::startFFmpeg()
{
    start("ffmpeg", ffmpegArgs);
    connect(this, &FFmpegProcess::readyReadStandardError, this, &FFmpegProcess::readFFmpegLine);
    connect(this, &FFmpegProcess::readyReadStandardOutput, this, &FFmpegProcess::readFFmpegLine);
    //TO-DO
    //connect(this, SIGNAL(finished(int)), this, SLOT(processFinished(int)));
    setDuration("Processing");
    setStatus("Starting");
}


void FFmpegProcess::readFFmpegLine()
{
    QString line = readAllStandardError();
    setRawLine(line);
    buffer += line;
    processRawData(&line);
}

void FFmpegProcess::processRawData(QString *const line)
{
    if(line->contains("Duration: "))
        processDuration(line);
}

void FFmpegProcess::processDuration(QString *const line)
{
    QString temp1 = *line;
    temp1 = temp1.mid(temp1.indexOf("Duration:") + 10);
    temp1 = temp1.left(temp1.indexOf(","));
    setDuration(temp1);
}

QString FFmpegProcess::duration()
{
    return m_duration;
}

QString FFmpegProcess::rawLine()
{
    return m_rawline;
}

QString FFmpegProcess::status()
{
    return m_status;
}

void FFmpegProcess::setStatus(QString status)
{
    m_status = status;
    emit statusChanged(status, tableRow);
}

void FFmpegProcess::setDuration(QString duration)
{
    m_duration = duration;
    emit durationChanged(duration, tableRow);
}

void FFmpegProcess::setRawLine(QString rawLine)
{
    m_rawline = rawLine;
    emit lineRead(rawLine);
}
