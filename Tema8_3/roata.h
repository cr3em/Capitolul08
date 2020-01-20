#ifndef ROATA_H
#define ROATA_H
#include "anvelopa.h"
#include "janta.h"

class Roata
{
public:
    Roata(Anvelopa, Janta);
    bool IsFlat();
    void SchimbaRoata(Anvelopa, Janta);
    void UmflaRoata(double presiune);
    TipAnvelopa GetTipAnvelopa() {return _anvelopa.GetAnvelopa();}
private:
    Anvelopa _anvelopa;
    Janta _janta;
};

#endif // ROATA_H
