#include "stoppoint.h"


StopPoint::StopPoint()
{

}



/*!

*/
QTime StopPoint::secondsToQtime(QString vstup)
{
    QTime result;
    if(!vstup.isEmpty())
    {
        int seconds=vstup.toInt();
        seconds=seconds%86400; //fix for connection through midnight
        int hours=seconds/3600;
        int minutes=(seconds%3600)/60;
        result = QTime(hours,minutes);
    }
    return result;
}

QDateTime StopPoint::secondsToQDateTime(QString secondsCountString, QDate baseDate)
{
    QDateTime result;
    if(!secondsCountString.isEmpty())
    {
        result.setDate(baseDate);
        result=result.addSecs(secondsCountString.toInt());
    }
    return result;
}


QTime StopPoint::arrivalToQTime()
{
    return secondsToQtime(ArrivalTime);
}

QDateTime StopPoint::arrivalToQDateTime()
{
    return secondsToQDateTime(ArrivalTime,QDate::currentDate());
}

QTime StopPoint::departureToQTime()
{
    return secondsToQtime(DepartureTime);
}

QDateTime StopPoint::departureToQDateTime()
{
    return secondsToQDateTime(DepartureTime,QDate::currentDate());
}
/*!
 * \brief StopPoint::ref
 * returns composed value of stop for VDV301 StopPoint and DestinationRef etc. usage
 * \return
 */

QString StopPoint::ref()
{
    if((idU==0)&&(idZ==0))
    {
        return "noRef";
    }
    QString uString=QString::number(idU);
    QString zString=QString::number(idZ);

    return uString+"_"+zString;
}
