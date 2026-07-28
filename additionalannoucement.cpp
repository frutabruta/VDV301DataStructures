#include "additionalannoucement.h"

AdditionalAnnoucement::AdditionalAnnoucement()
{



}


QString AdditionalAnnoucement::formatText(QString &text, QColor color, int fontSize)
{
    QString output=QString("<font size=\"%1\"><color fg=\"%2\">%3</color></font>").arg(QString::number(fontSize),color.name() ,text);
    return output;
}

QString AdditionalAnnoucement::formatText(QString &text, int fontSize)
{
    QString output=QString("<font size=\"%1\">%2</font>").arg(QString::number(fontSize),text);
    return output;
}

QString AdditionalAnnoucement::formatText(QString &text, QColor color)
{
    QString output=QString("<color fg=\"%1\">%2</color>").arg(color.name() ,text);
    return output;
}


