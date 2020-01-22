#include <iostream>
#include "mentor.h"
#include "cursant.h"

using namespace std;

int main()
{
    Mentor theBest("Dumb", " Dude", "Spalarea aerului");
    cout << theBest.GetNumeComplet() << endl;
    cout << theBest.Get_Prenume();
    cout <<theBest.Activitate();
    cout << theBest.Get_Materie() << endl;
    Cursant chuck("Chuck", " Norris", "Spalarea aerului");
    cout << chuck.GetNumeComplet() << endl;
    cout << chuck.Get_Prenume();
    cout << chuck.Activitate();
    cout << chuck.Get_Materie() << endl;
    cout << chuck.Get_Prenume();
    cout << chuck.Absolva() << endl;
    chuck.SetNotaTeme(6);
    chuck.SetNotaTeste(7);
    chuck.SetNotaProiect(6);
    cout << chuck.Get_Prenume();
    cout << chuck.Absolva() << endl;
    theBest.SchimbaMentor("Dumber", " Dude");
    theBest.SchimbaMaterie("Numaratul oilor");
    cout << theBest.GetNumeComplet() << endl;
    cout << theBest.Get_Prenume();
    cout << theBest.Activitate();
    cout << theBest.Get_Materie() << endl;
    Cursant obiWan("Obi Wan ", "Kenobi", "Numaratul oilor");
    cout << obiWan.GetNumeComplet() << endl;
    cout << obiWan.Get_Prenume();
    cout << obiWan.Activitate();
    cout << obiWan.Get_Materie() << endl;
    cout << obiWan.Get_Prenume();
    cout << obiWan.Absolva() << endl;
    obiWan.SetNotaTeme(10);
    obiWan.SetNotaTeste(10);
    obiWan.SetNotaProiect(10);
    cout << obiWan.Get_Prenume();
    cout << obiWan.Absolva() << endl;

    return 0;
}
