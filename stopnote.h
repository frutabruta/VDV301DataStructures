#ifndef STOPNOTE_H
#define STOPNOTE_H

#include <QObject>

class StopNote
{
public:
    StopNote();

    //c
    //t
     QString text="";
    //zkr1
    //zkr2
    //ois
    bool showToDriver=false;
   

    //n
    //tn
    //nl
    //anl
    //dd
    //cc
    //cd
    //thls
    bool isSpecialAnnouncement=false;
    //tpan
    QString lcdText="";
    //kan
    bool speakerInside=false;
    bool speakerOutside=false;
    bool speakerDriver=false;
    //akce
    bool activateOnArrival=false;
    bool activateOnDeparture=false;
    //nahl
    QString soundName=""; //soundfile name without file extension


    void setSpeakerFlags(int input);
    void setActivationFlags(int input);
};

#endif // STOPNOTE_H
