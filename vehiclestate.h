#ifndef VEHICLESTATE_H
#define VEHICLESTATE_H


#include <QObject>
#include <QDate>
#include "line.h"
#include "vehiclerun.h"
#include "additionalannoucement.h"
#include "vdv301enumerations.h"

class VehicleState
{
public:
    explicit VehicleState();

    // instances
    AdditionalAnnoucement currentSpecialAnnoucement;
    QVector<AdditionalAnnoucement> specialAnnouncementQueue;
    Line currentLine;
    VehicleRun currentVehicleRun;
    Trip currentTrip;

    //variables
    bool showConnections=false;
    int stopPointCount; //unused
    int isDoorOpen=0; //unused
    bool showFareZoneChange=false;
    QDate referenceDate;
    int secondsDelay=0; //stores difference between real time and scheduled time
    int currentTripIndex;
    bool isSpecialAnnoucementUsed=false;

    //VDV301specific
    Vdv301Enumerations::DoorOpenStateEnumeration doorState=Vdv301Enumerations::DoorOpenStateAllDoorsClosed;
    Vdv301Enumerations::LocationStateEnumeration locationState=Vdv301Enumerations::LocationStateAtStop;
    Vdv301Enumerations::RouteDeviationEnumeration routeDeviation=Vdv301Enumerations::RouteDeviationOnroute;
    QString vehicleSubMode="regionalBus";
    QString vehicleMode="BusSubmode";
    Vdv301Enumerations::TicketRazziaInformationEnumeration razziaState=Vdv301Enumerations::TicketRazziaNoRazzia;
    bool isVehicleStopRequested=false;
    int currentStopIndex0;
    int vehicleNumber=1234;
    int exitSide=0;
    bool movingDirectionForward=true;
    QString driverNumber="6789";

    //functions
    int reset();
    int countCurrentTripStops();
    Trip getCurrentTrip();
    StopPointDestination getCurrentStopPointDestination(bool &isNull);

signals:

public slots:
};

#endif // VEHICLESTATE_H
