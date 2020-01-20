#include <iostream>
#include "mentor.h"
#include "cursant.h"

using namespace std;

int main()
{
    Mentor theBest("Dumb", "Dude", "Spalarea aerului");
    theBest.GetNumeComplet();
    theBest.Activitate();
    Cursant chuck("Chuck", "Norris", "Spalarea aerului");
    chuck.GetNumeComplet();
    chuck.Activitate();
    chuck.Absolva();
    chuck.SetNotaTeme(6);
    chuck.SetNotaTeste(7);
    chuck.SetNotaProiect(6);
    chuck.Absolva();
    theBest.SetPrenume("Dumber");
    theBest.SetNume("Dude");
    theBest.SetMaterie("Numaratul oilor");
    theBest.GetNumeComplet();
    theBest.Activitate();
    Cursant obiWan("Obi Wan", "Kenobi", "Numaratul oilor");
    obiWan.GetNumeComplet();
    obiWan.Activitate();
    obiWan.Absolva();
    obiWan.SetNotaTeme(10);
    obiWan.SetNotaTeste(10);
    obiWan.SetNotaProiect(10);
    obiWan.Absolva();

    return 0;
}
