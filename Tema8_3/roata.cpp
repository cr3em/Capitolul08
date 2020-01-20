#include "roata.h"


Roata::Roata(Anvelopa tipAnv, Janta tipMat) : _anvelopa(tipAnv), _janta(tipMat) {}

bool Roata::IsFlat()
{
    if(_anvelopa.GetPresiune() > 1)
        return true;
    else
        return false;
}

void Roata::SchimbaRoata(Anvelopa nouTip, Janta nouMat)
{
    _anvelopa = nouTip;
    _janta = nouMat;
}

void Roata::UmflaRoata(double presiune)
{
   _anvelopa.UmflaAnvelopa(presiune);
}
