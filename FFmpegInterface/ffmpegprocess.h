#ifndef FFMPEGPROCESS_H
#define FFMPEGPROCESS_H

#include <QProcess>

class FFmpegProcess : public QProcess
{
    Q_PROPERTY(QString duration READ duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(QString rawLine READ rawLine WRITE setRawLine NOTIFY lineRead)
    Q_PROPERTY(QString status READ status WRITE setStatus NOTIFY statusChanged)

    Q_OBJECT
public:
    FFmpegProcess(){}
    ~FFmpegProcess(){}

    void setDuration(QString duration);
    void setRawLine(QString rawLine);
    void setStatus(QString status);

    QString duration();
    QString rawLine();
    QString status();

    QString buffer;

protected:
    void startFFmpeg();
    QStringList ffmpegArgs;

private:
    QString m_duration;
    QString m_rawline;
    QString m_status;

    int tableRow;

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
