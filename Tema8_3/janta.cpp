#include "janta.h"

Janta::Janta() : _nrPrezoane(5), _matJanta(aluminiu), _diametru(14) {}

Janta::Janta(short prezon, MatJanta aliaj, short diametru) : _nrPrezoane(prezon), _matJanta(aliaj), _diametru(diametru) {}

void Janta::SchimbaJanta(MatJanta aliaj, short diametru)
{
    _matJanta = aliaj;
    _diametru = diametru;
}
