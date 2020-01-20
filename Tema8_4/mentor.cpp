#include "mentor.h"

Mentor::Mentor(string prenume, string nume, string materie) : Persoana(prenume, nume, materie) {}

string Mentor::Activitate()
{
    return " preda" + Persoana::Activitate();
}

void Mentor::SchimbaMaterie(string materie)
{
    SetMaterie(materie);
}

void Mentor::SchimbaMentor(string nouPrenume, string nouNume)
{
    SetPrenume(nouPrenume);
    SetNume(nouNume);
}
