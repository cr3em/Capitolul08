#include "anvelopa.h"

Anvelopa::Anvelopa() : _brand("Michelin"), _presiune(2.2), _tipAnvelopa(vara) {}

Anvelopa::Anvelopa(std::string brand, double presiune, TipAnvelopa tip) : _brand(brand), _presiune(presiune), _tipAnvelopa(tip) {}

void Anvelopa::UmflaAnvelopa(double presiune)
{
    if (presiune > 3)
    {
        _presiune = 3;
    }
    else
        _presiune = presiune;
}
