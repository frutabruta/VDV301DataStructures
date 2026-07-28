#ifndef STOPPOINT_H
#define STOPPOINT_H

//#include <QMainWindow>
#include <QObject>
#include <QPolygonF>

#include "farezone.h"
#include "connection.h"
#include "stopnote.h"


class StopPoint
{
public:    
    StopPoint();

    int StopIndex=0;
    int idCis=0; //global stop ID from CIS JŘ (Celostátní informační systém o jízdních řádech)
    int idU=0; // stop group ID from ASW software
    int idZ=0; // specific stop ID
    int idOis=0; // id of MP3 file and bitmap stored in code driven displays, legacy system

    QString ids="";
    QString StopName="";
    int DestinationCis=0;
    QString ArrivalTime="";
    QString DepartureTime="";
    QString NameFront="";
    QString NameFront2="";
    QString NameSide="";
    QString NameLcd="";
    QString NameRear="";
    QString NameInner="";
    bool transferTrain=false;
    bool transferMetroA=false;
    bool transferMetroB=false;
    bool transferMetroC=false;
    bool transferMetroD=false;
    bool transferAirplane=false;
    bool transferFerry=false;
    bool onRequest=false;
    bool neozn=false; //ignore on request announcement
    bool zast=false; //enforce stop driver announcement in stop on request stops
    bool zsol=0; //prujezdna konecna, change of destination
    QString additionalTextMessage="";


    bool isViapoint=false;

    QString platformName="";

    double lng=0.0; //GNSS longitude WGS84
    double lat=0.0; //GNSS latitude WGS84

    double sx=0.0; //GNSS longitude S_JTSK
    double sy=0.0; //GNSS latitude  S_JTSK

    QPolygonF polygonWgs84;
    QPolygonF polygonWgs84_out;

    int radius=0; //polomer vyhlaseni zastavky

    QVector<FareZone> fareZoneList;
    QVector<QString> iconList;
    QVector<Connection> connectionList;

    QVector<QString> notesList; //list of notes displayed to driver
    QVector<StopNote> stopNoteList;

    QTime arrivalToQTime();
    QTime departureToQTime();
    QDateTime arrivalToQDateTime();
    QDateTime departureToQDateTime();

    static QTime secondsToQtime(QString vstup);
    static QDateTime secondsToQDateTime(QString secondsCountString, QDate baseDate);
    QString ref();
};


#endif // STOPPOINT_H
