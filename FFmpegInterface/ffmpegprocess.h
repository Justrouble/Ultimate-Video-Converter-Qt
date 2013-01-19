#ifndef FFMPEGPROCESS_H
#define FFMPEGPROCESS_H

#include <QProcess>
#include <QDebug>

class FFmpegProcess : public QProcess
{
    Q_PROPERTY(QString duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(QString rawLine WRITE setRawLine NOTIFY lineRead)
    Q_PROPERTY(QString status WRITE setStatus NOTIFY statusChanged)

    Q_OBJECT
public:
    explicit FFmpegProcess(){ }
    ~FFmpegProcess(){ }

    QString duration;
    QString rawLine;
    QString status;

    QString buffer;

protected:
    void startFFmpeg();
    QStringList ffmpegArgs;

private:
    int tableRow;

    void setDuration(QString duration);
    void setRawLine(QString rawLine);
    void setStatus(QString status);

    void processRawData(QString *const line);
    void processDuration(QString *const line);

signals:
    //void progress();
    void lineRead(QString rawLine);
    void durationChanged(QString duration, int tableRow);
    void statusChanged(QString duration, int tableRow);

private slots:
    void readFFmpegLine();
    //void processFinished(int code);
};

#endif // FFMPEGPROCESS_H
