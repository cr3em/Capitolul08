#include "cursant.h"

Cursant::Cursant(string prenume, string nume, string materie) : Persoana (prenume, nume, materie)
{
    _notaTeme = 0;
    _notaTeste = 0;
    _notaProiect = 0;
}

string Cursant::Activitate()
{
    return " studiaza" + Persoana::Activitate();
}

bool Cursant::HasGrades()
{
    if(_notaTeme != 0 && _notaTeste != 0 && _notaProiect != 0)
        return true;
    else
        return false;
}

bool Cursant::IsAverageOk()
{
    if((_notaTeme + _notaTeste + _notaProiect) / 3) >= 7)
        return true;
    else
        return false;
}

string Cursant::Absolva()
{
    if(HasGrades() == false)
        cout << " nu are note suficiente";
    else if(IsAverageOk() == false)
        cout << " nu absolva";
    else if(IsAverageOk() == true)
        cout << " absolva";
}
