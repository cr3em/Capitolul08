#include "persoana.h"

Persoana::Persoana(std::string prenume, std::string nume, std::string materie) : _prenume(prenume), _nume(nume), _materie(materie) {}

std::string Persoana::Activitate()
{
    return " cursul ";
}

