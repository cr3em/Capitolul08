#include <iostream>
#include"normaprof.h"

using namespace std;

int main()
{
    Clasa oClasa{11, 'C', 4};
    Clasa altaClasa{5, 'B', 5};
    Clasa ultimaClasa{9, 'A', 3};
    NormaProf ludu {oClasa, altaClasa, ultimaClasa, matematica};
    NormaProf *mutu = new NormaProf{oClasa, altaClasa, ultimaClasa, fizica};

    cout << "Orarul este:\n";
    ludu.AfiseazaOre();
    cout << ludu.CalculeazaTotalOre() << endl;
    cout << "Orarul este:\n";
    mutu->AfiseazaOre();
    cout << mutu->CalculeazaTotalOre() << endl;

    return 0;
}
