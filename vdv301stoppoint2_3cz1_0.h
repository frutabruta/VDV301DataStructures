#ifndef VDV301STOPPOINT2_3CZ1_0_H
#define VDV301STOPPOINT2_3CZ1_0_H

#include "vdv301stoppoint.h"
#include "vdv301displaycontent2_3cz1_0.h"
class Vdv301StopPoint2_3CZ1_0 : public Vdv301StopPoint
{
public:
    Vdv301StopPoint2_3CZ1_0();
    QString globalStopRef="noRef";// Reference to the stoppoint from global timetable system
    QVector<Vdv301InternationalText> fareZoneList;
    QVector<Vdv301DisplayContent2_3CZ1_0> displayContentList; // type="DisplayContentStructure" maxOccurs="unbounded"
};

#endif // VDV301STOPPOINT2_3CZ1_0_H
