#include "vdv301displaycontent2_3cz1_0.h"

Vdv301DisplayContent2_3CZ1_0::Vdv301DisplayContent2_3CZ1_0() {}

/*
Vdv301DisplayContent Vdv301DisplayContent2_3CZ1_0::toVdv301DisplayContent()
{
    Vdv301DisplayContent output;
    output.displayContentRef=this->displayContentRef;
    output.displayContentType=this->displayContentType;
    output.additionalInformation=this->additionalInformation;
    output.lineInformation=this->lineInformation;
    output.duration=this->duration;
    output.destination=this->destination;
    output.priority=this->priority;
}*/

QVector<Vdv301DisplayContent> Vdv301DisplayContent2_3CZ1_0::vdv301DisplayContent2_3CZ1_0ListToVdv301DisplayContentList(QVector<Vdv301DisplayContent2_3CZ1_0> input)
{
    QVector<Vdv301DisplayContent> output;
    foreach(Vdv301DisplayContent2_3CZ1_0 value, input)
    {
        output<<value;
    }
    return output;
}
