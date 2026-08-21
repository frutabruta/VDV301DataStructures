#ifndef ADDITIONALANNOUCEMENT2_3CZ1_0_H
#define ADDITIONALANNOUCEMENT2_3CZ1_0_H
#include <QString>
#include <QVector>
class AdditionalAnnoucement2_3CZ1_0
{
public:
    AdditionalAnnoucement2_3CZ1_0();


    QString type=""; //used for nothing or "fareZoneChange" or "lineChange"
    QString icon=""; //used for left side
    QString text=""; //used for text, right side
    QString displayName=""; //text for on board computer display
    QString changeFrom=""; //used for lineChange and fareZoneChange values
    QString changeTo=""; //used for lineChange and fareZoneChange values
    QVector<QString> mp3;
    int duration=10000; //duration in seconds
};

#endif // ADDITIONALANNOUCEMENT2_3CZ1_0_H
