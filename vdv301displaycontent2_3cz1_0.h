#ifndef VDV3_1DISPLAYCONTENT2_3CZ1___H
#define VDV3_1DISPLAYCONTENT2_3CZ1___H

#include "vdv301displaycontent.h"
#include "vdv301viapoint2_3cz1_0.h"

class Vdv301DisplayContent2_3CZ1_0 : public Vdv301DisplayContent
{
public:
    Vdv301DisplayContent2_3CZ1_0();
    QVector<Vdv301ViaPoint2_3CZ1_0> viaPointList; // minOccurs="0" maxOccurs="unbounded",Information on the via points which should be displayed
    static QVector<Vdv301DisplayContent> vdv301DisplayContent2_3CZ1_0ListToVdv301DisplayContentList(QVector<Vdv301DisplayContent2_3CZ1_0> input);
};

#endif // VDV3_1DISPLAYCONTENT2_3CZ1___H
