#include "vdv301enumerations.h"

Vdv301Enumerations::Vdv301Enumerations() {}


Vdv301Enumerations::DoorOpenStateEnumeration Vdv301Enumerations::DoorOpenStateEnumerationFromQString(QString text)
{
    if(text=="DoorsOpen")
    {
        return DoorOpenStateDoorsOpen;
    }
    else if(text=="SingleDoorClosed")
    {
        return DoorOpenStateSingleDoorClosed;
    }
    else if(text=="SingleDoorOpen")
    {
        return DoorOpenStateSingleDoorOpen;
    }
    else if(text=="AllDoorsClosed")
    {
        return DoorOpenStateAllDoorsClosed;
    }

    return DoorOpenStateAllDoorsClosed; // create a default state!!!
}

Vdv301Enumerations::LocationStateEnumeration Vdv301Enumerations::LocationStateEnumerationFromQString(QString text)
{
    if(text=="AtStop")
    {
        return LocationStateAtStop;
    }
    else if(text=="AfterStop")
    {
        return LocationStateAfterStop;
    }
    else if(text=="BeforeStop")
    {
        return LocationStateBeforeStop;
    }
    else if(text=="BetweenStop")
    {
        return LocationStateBetweenStop;
    }
    return LocationStateError;

}

Vdv301Enumerations::RemoteControlMessageTypeEnumeration Vdv301Enumerations::RemoteControlMessageTypeEnumerationFromQString(QString input)
{
    if(input=="Ok")
    {
        return RemoteControlOk;
    }
    else if(input=="Error")
    {
        return RemoteControlError;
    }
    else if(input=="DestinationRequest")
    {
        return RemoteControlDestinationRequest;
    }
    else if(input=="GetOnRequest")
    {
        return RemoteControlGetOnRequest;
    }
    else if(input=="StopRazzia")
    {
        return RemoteControlStopRazzia;
    }
    else if(input=="StartRazzia")
    {
        return RemoteControlStartRazzia;
    }

    return RemoteControlError;
}

Vdv301Enumerations::TicketRazziaInformationEnumeration Vdv301Enumerations::TicketRazziaInformationEnumerationFromQString(QString input)
{
    if(input=="razzia")
    {
        return TicketRazziaRazzia;
    }
    if(input=="norazzia")
    {
        return TicketRazziaNoRazzia;
    }

    return TicketRazziaNoRazzia;
}


Vdv301Enumerations::RouteDeviationEnumeration Vdv301Enumerations::RouteDeviationEnumerationFromQString(QString input)
{
    if(input=="onroute")
    {
        return RouteDeviationOnroute;
    }
    if(input=="offroute")
    {
        return RouteDeviationOffroute;
    }
    if(input=="unknown")
    {
        return RouteDeviationUnknown;
    }

    return RouteDeviationUnknown;
}


QString Vdv301Enumerations::LocationStateEnumerationToQString(Vdv301Enumerations::LocationStateEnumeration input)
{
    switch(input)
    {
    case LocationStateAtStop:
        return "AtStop";
        break;
    case LocationStateAfterStop:
        return "AfterStop";
        break;
    case LocationStateBeforeStop:
        return "BeforeStop";
        break;
    case LocationStateBetweenStop:
        return "BetweenStop";
        break;
    case LocationStateError:
        return "Error";
        break;
    default:
        return "";
        break;

    }
    return "";
}

QString Vdv301Enumerations::DoorOpenStateEnumerationToQString(Vdv301Enumerations::DoorOpenStateEnumeration input)
{
    switch(input)
    {
    case DoorOpenStateDoorsOpen:
        return "DoorsOpen";
        break;
    case DoorOpenStateSingleDoorClosed:
        return "SingleDoorClosed";
        break;
    case DoorOpenStateSingleDoorOpen:
        return "SingleDoorOpen";
        break;
    case DoorOpenStateAllDoorsClosed:
        return "AllDoorsClosed";
        break;
    default:
        return "";
        break;
    }
}


QString Vdv301Enumerations::RouteDeviationEnumerationToQString(Vdv301Enumerations::RouteDeviationEnumeration input)
{
    switch(input)
    {
    case RouteDeviationOnroute:
        return "onroute";
        break;
    case RouteDeviationOffroute:
        return "offroute";
        break;
    case RouteDeviationUnknown:
        return "unknown";
        break;
    default:
        return "unknown";
        break;
    }
}


QString Vdv301Enumerations::RemoteControlMessageTypeToQString(Vdv301Enumerations::RemoteControlMessageTypeEnumeration input)
{
    switch (input)
    {
    case RemoteControlOk:
        return "Ok";
        break;
    case RemoteControlError:
        return "Error";
        break;
    case RemoteControlDestinationRequest:
        return "DestinationRequest";
        break;
    case RemoteControlGetOnRequest:
        return "GetOnRequest";
        break;
    case RemoteControlStartRazzia:
        return "StartRazzia";
        break;
    case RemoteControlStopRazzia:
        return "StopRazzia";
        break;
    }
    return "Error";
}

QString Vdv301Enumerations::TicketRazziaInformationEnumerationToQString(Vdv301Enumerations::TicketRazziaInformationEnumeration input)
{
    switch (input)
    {
    case TicketRazziaRazzia:
        return "razzia";
        break;
    case TicketRazziaNoRazzia:
        return "norazzia";
        break;
    }
    return "norazzia";
}

