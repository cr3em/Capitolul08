#include "cilindru.h"
#include "cerc.h"

static double PI = 3.14;

Cilindru::Cilindru(double r, double i) : _baza(r), _inaltime(i) {}

double Cilindru::Volum()
{
  return _baza.Arie()*_inaltime;
}

double Cilindru::ArieCilindru()
{
    return (2*(_baza.Arie()) + (2* PI * _baza.Get_Raza() * _inaltime));
}
