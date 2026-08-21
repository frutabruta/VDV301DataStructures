#ifndef STOPPOINTDESTINATION_H
#define STOPPOINTDESTINATION_H
#include "stoppoint.h"
#include "line.h"

class StopPointDestination
{
public:
    StopPointDestination();
    StopPoint stopPoint;
    StopPoint destination;
    Line line;
    QVector<StopPoint> viaPoints;
};

#endif // STOPPOINTDESTINATION_H
