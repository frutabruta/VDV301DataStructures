#ifndef VDV3_1VIAPOINT2_3CZ1___H
#define VDV3_1VIAPOINT2_3CZ1___H

#include "vdv301viapoint.h"

class Vdv301ViaPoint2_3CZ1_0 : public Vdv301ViaPoint
{
public:
    Vdv301ViaPoint2_3CZ1_0();
    QString arrivalScheduled=""; // type="IBIS-IP.dateTime" minOccurs="0"
    QString arrivalExpected=""; // type="IBIS-IP.dateTime" minOccurs="0" A resolution of 30s is recommended, for the display it is recommended to show the arrival time in minutes.
    QString departureScheduled=""; // type="IBIS-IP.dateTime" minOccurs="0"
    QString departureExpected=""; // type="IBIS-IP.dateTime" minOccurs="0"
};

#endif // VDV3_1VIAPOINT2_3CZ1___H
