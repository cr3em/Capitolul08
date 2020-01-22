#include "cursant.h"

Cursant::Cursant(std::string prenume, std::string nume, std::string materie) : Persoana (prenume, nume, materie)
{
    _notaTeme = 0;
    _notaTeste = 0;
    _notaProiect = 0;
}

std::string Cursant::Activitate()
{
    return " studiaza" + Persoana::Activitate();
}

bool Cursant::HasGrades()
{
    if(_notaTeme > 0 && _notaTeste > 0 && _notaProiect > 0)
        return true;
    else
        return false;
}

bool Cursant::IsAverageOk()
{
    if(((_notaTeme + _notaTeste + _notaProiect) / 3) >= 7)
        return true;
    else
        return false;
}

std::string Cursant::Absolva()
{
    if(HasGrades() == false)
        return " nu are note suficiente";
    else if(IsAverageOk() == false)
        return " nu absolva";
    else
        return " absolva";
}
