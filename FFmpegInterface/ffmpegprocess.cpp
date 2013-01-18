#include "ffmpegprocess.h"

void FFmpegProcess::startFFmpeg() {
    start("ffmpeg", ffmpegArgs);
    connect(this, &FFmpegProcess::readyReadStandardError, this, &FFmpegProcess::readFFmpegLine);
    connect(this, &FFmpegProcess::readyReadStandardOutput, this, &FFmpegProcess::readFFmpegLine);
    //TO-DO
    //connect(this, SIGNAL(finished(int)), this, SLOT(processFinished(int)));
    setDuration("Processing");
    setStatus("Starting");
}


void FFmpegProcess::readFFmpegLine() {
    QString line = readAllStandardError();
    setRawLine(line);
    buffer += line;
    processRawData(&line);
}

void FFmpegProcess::processRawData(QString *const line) {
    if(line->contains("Duration: "))
    {
        processDuration(line);
    }
}

void FFmpegProcess::processDuration(QString *const line) {
    QString temp1 = *line;
    temp1 = temp1.mid(temp1.indexOf("Duration:") + 10);
    temp1 = temp1.left(temp1.indexOf(","));
    setDuration(temp1);
}

void FFmpegProcess::setStatus(QString tempstatus) {
    status = tempstatus;
    emit statusChanged(tempstatus, tableRow);
}

void FFmpegProcess::setDuration(QString tempduration) {
    duration = tempduration;
    emit durationChanged(tempduration, tableRow);
}

void FFmpegProcess::setRawLine(QString temprawLine) {
    rawLine = temprawLine;
    emit lineRead(temprawLine);
}
