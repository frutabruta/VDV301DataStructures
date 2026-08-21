#ifndef VDV301CURRENTDISPLAYCONTENT_H
#define VDV301CURRENTDISPLAYCONTENT_H

#include <QDateTime>
#include "vdv301displaycontent.h"

class Vdv301CurrentDisplayContent
{
public:
    Vdv301CurrentDisplayContent();    

    QDateTime timeStamp;
    QVector<Vdv301DisplayContent> displayContentList; // type="DisplayContentStructure" maxOccurs="unbounded"

};

#endif // VDV301CURRENTDISPLAYCONTENT_H
