#include "mentor.h"

Mentor::Mentor(std::string prenume, std::string nume, std::string materie) : Persoana(prenume, nume, materie) {}

std::string Mentor::Activitate()
{
    return " preda" + Persoana::Activitate();
}

void Mentor::SchimbaMaterie(std::string materie)
{
    SetMaterie(materie);
}

void Mentor::SchimbaMentor(std::string nouPrenume, std::string nouNume)
{
    SetPrenume(nouPrenume);
    SetNume(nouNume);
}
