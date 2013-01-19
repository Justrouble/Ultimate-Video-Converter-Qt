#include "conversionfile.h"

void ConversionFile::convert() {
    ffmpegArgs << "-i" << file;
    ffmpegArgs << "-strict" << "experimental" << "-y";
    ffmpegArgs << "-vcodec" << VideoCodec;
    ffmpegArgs << "-acodec" << AudioCodec;
    ffmpegArgs << getFullOutputFile();
    startFFmpeg();
}

inline QString ConversionFile::getFullOutputFile() {
    return (outputDir + QDir::separator() + outputFile);
}

void ConversionFile::initalSetup(QString f, QString outputD, QString VideoC, QString AudioC) {
    file = f;
    outputDir = outputD;
    VideoCodec = VideoC;
    AudioCodec = AudioC;
    outputFile = f.remove(0, f.lastIndexOf(QDir::separator()) + 1);
    outputFile.chop(outputFile.length() - outputFile.lastIndexOf("."));
    outputFile += extension;
}
