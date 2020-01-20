#ifndef MASINA_H
#define MASINA_H
#include "roata.h"
#include <iostream>

class Masina
{
public:
    Masina(Roata, Roata, Roata, Roata);
    void AfiseazaStareRoti(std::string);
    void UmflaRoti(double);
    void UmflaRoata(short, double);
    void SchimbaRoti(Roata, Roata, Roata, Roata);
    void SchimbaRoata(short, Roata);
    void AfiseazaTipCauciucuri(std::string);
private:
    Roata _roti[4];
    short VerificaRoti();
};

#endif // MASINA_H
