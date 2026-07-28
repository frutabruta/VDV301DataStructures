#include "stopnote.h"

StopNote::StopNote() {}


void StopNote::setSpeakerFlags(int input)
{
    speakerInside = (input & 0x01) != 0;
    speakerOutside = (input & 0x02) != 0;
    speakerDriver = (input & 0x04) != 0;
}

void StopNote::setActivationFlags(int input)
{
    activateOnArrival = (input & 0x01) != 0;
    activateOnDeparture = (input & 0x02) != 0;
}
