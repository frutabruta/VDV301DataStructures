#ifndef VDV3_1VEHICLEDATA_H
#define VDV3_1VEHICLEDATA_H
#include "vdv301enumerations.h"
class Vdv301VehicleData
{
public:
    Vdv301VehicleData();
    QString vehicleRef=""; // "VehicleRef" type="IBIS-IP.NMTOKEN"

    Vdv301Enumerations::RouteDeviationEnumeration routeDeviation=Vdv301Enumerations::RouteDeviationOnroute; //RouteDeviation type="RouteDeviationEnumeration" minOccurs="0"
    Vdv301Enumerations::DoorOpenStateEnumeration doorOpenState=Vdv301Enumerations::DoorOpenStateAllDoorsClosed; // DoorState type="DoorOpenStateEnumeration", Information on DoorState, minOccurs="0"
    bool movingDirectionForward=true; //type="IBIS-IP.boolean" minOccurs="0"
    Vdv301Enumerations::VehicleModeEnumeration vehicleMode1_0=Vdv301Enumerations::VehicleModeUnknown;
    QString vehicleSubMode="regionalBus";
    QString vehicleMode="BusSubmode";
    QString driverNumber=""; //type="IBIS-IP.string" minOccurs="0"


    //bool inPanic=false;// type="IBIS-IP.boolean" minOccurs="0"
    //bool vehicleStopRequested=false;// type="IBIS-IP.boolean" minOccurs="0", Is the Stop-Button inside the vehicle pressed?
    //Vdv301Enumerations::ExitSideEnumeration exitSide=Vdv301Enumerations::ExitSideLeft; // name="ExitSide" type="ExitSideEnumeration" minOccurs="0", Defines the exit side
    // name="MyOwnVehicleMode" type="NetexMode" minOccurs="0", Mode- and Submode information vehicle I am in - in accordance with Netex
    // name="SpeakerActive" type="IBIS-IP.boolean" minOccurs="0", Gives information, if the loud speaker is activated for a passenger announcement
    // name="StopInformationActive" type="IBIS-IP.boolean" minOccurs="0", Gives information, if the stopInformation inside the vehicle is in active or in passiv state (intentionally, e.g. due to "route left)
    //Vdv301Enumerations::TripStateEnumeration tripState=Vdv301Enumerations::TripStateOnTrip;// name="TripState" type="TripStateEnumeration" minOccurs="0"

};

#endif // VDV3_1VEHICLEDATA_H
