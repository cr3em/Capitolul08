#ifndef CILINDRU_H
#define CILINDRU_H
#include "cerc.h"

class Cilindru
{
public:
    Cilindru(double, double);
    double Volum();
    double ArieCilindru();
private:
    Cerc _baza;
    double _inaltime;
};

#endif // CILINDRU_H
