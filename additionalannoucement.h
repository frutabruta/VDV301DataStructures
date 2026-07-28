#ifndef ADDITIONALANNOUCEMENT_H
#define ADDITIONALANNOUCEMENT_H

#include <QObject>
#include <QColor>

class AdditionalAnnoucement
{
public:
    AdditionalAnnoucement();
    QString type=""; //used for general annoucement (no value), or "FareZoneChange" or "LineChange" values
    QString icon=""; //used for lef window, can contain text sometimes
    QString text=""; //used for text, right side
    QString displayName="";
    QString changeFrom=""; //used for lineChange and fareZoneChange values
    QString changeTo=""; //used for lineChange and fareZoneChange values
    QVector<QString> mp3;
    int duration=10000; //duration in miliseconds
    static QString formatText(QString &text, QColor color, int fontSize);
    static QString formatText(QString &text, int fontSize);
    static QString formatText(QString &text, QColor color);
};

#endif // ADDITIONALANNOUCEMENT_H
