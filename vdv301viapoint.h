#ifndef VDV301VIAPOINT_H
#define VDV301VIAPOINT_H

#include <QObject>
#include "vdv301internationaltext.h"
class Vdv301ViaPoint
{
public:
    Vdv301ViaPoint();
    QString viaPointRef=""; //type="IBIS-IP.NMTOKEN"
    QString PlaceRef=""; // type="IBIS-IP.NMTOKEN" minOccurs="0" unused
    QVector<Vdv301InternationalText> placeNameList;
    QVector<Vdv301InternationalText> placeShortNameList; //unused
    int viaPointDisplayPriority=1; //unused type="IBIS-IP.int" minOccurs="0"

};

#endif // VDV301VIAPOINT_H
