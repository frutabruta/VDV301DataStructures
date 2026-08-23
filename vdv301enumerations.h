#ifndef VDV301ENUMERATIONS_H
#define VDV301ENUMERATIONS_H

#include <QString>

class Vdv301Enumerations
{
public:
    Vdv301Enumerations();

    enum DoorOpenStateEnumeration
    {
        DoorOpenStateDoorsOpen,
        DoorOpenStateAllDoorsClosed,
        DoorOpenStateSingleDoorOpen,
        DoorOpenStateSingleDoorClosed
    };

    enum ExitSideEnumeration
    {
        ExitSideBoth,
        ExitSideLeft,
        ExitSideRight,
        ExitSideUnknown
    };

    enum LocationStateEnumeration
    {
        LocationStateAfterStop,
        LocationStateAtStop,
        LocationStateBeforeStop,
        LocationStateBetweenStop,
        LocationStateError
    };

    enum RouteDeviationEnumeration
    {
        RouteDeviationOnroute,
        RouteDeviationOffroute,
        RouteDeviationUnknown
    };

    enum TicketRazziaInformationEnumeration
    {
        TicketRazziaRazzia,
        TicketRazziaNoRazzia
    };


    enum TripStateEnumeration
    {
        TripStateEmptyRun,
        TripStateOnTrip,
        TripStateOffTrip,
        TripStateTripBreak,
        TripStateOffDuty,
        TripStateUnknown
    };


    enum VehicleModeEnumeration
    {
        VehicleModeUnknown,
        VehicleModeAir,
        VehicleModeBus,
        VehicleModeCoach,
        VehicleModeFerry,
        VehicleModeMetro,
        VehicleModeRail,
        VehicleModeTram,
        VehicleModeUnderGround
    };

    enum RemoteControlMessageTypeEnumeration
    {
        RemoteControlOk,
        RemoteControlError,
        RemoteControlDestinationRequest,
        RemoteControlGetOnRequest,
        RemoteControlStartRazzia,
        RemoteControlStopRazzia
    };

    static Vdv301Enumerations::LocationStateEnumeration LocationStateEnumerationFromQString(QString text);
    static Vdv301Enumerations::DoorOpenStateEnumeration DoorOpenStateEnumerationFromQString(QString text);
    static Vdv301Enumerations::RemoteControlMessageTypeEnumeration RemoteControlMessageTypeEnumerationFromQString(QString input);
    static Vdv301Enumerations::RouteDeviationEnumeration RouteDeviationEnumerationFromQString(QString input);
    static Vdv301Enumerations::TicketRazziaInformationEnumeration TicketRazziaInformationEnumerationFromQString(QString input);

    static QString DoorOpenStateEnumerationToQString(Vdv301Enumerations::DoorOpenStateEnumeration input);
    static QString LocationStateEnumerationToQString(Vdv301Enumerations::LocationStateEnumeration input);
    static QString RemoteControlMessageTypeToQString(Vdv301Enumerations::RemoteControlMessageTypeEnumeration input);
    static QString RouteDeviationEnumerationToQString(Vdv301Enumerations::RouteDeviationEnumeration input);
    static QString TicketRazziaInformationEnumerationToQString(Vdv301Enumerations::TicketRazziaInformationEnumeration input);

};

#endif // VDV301ENUMERATIONS_H
