#ifndef NORMAPROF_H
#define NORMAPROF_H
#include "clasa.h"


enum Materie{fizica, matematica, chimie, romana, sport};

class NormaProf
{
public:
    NormaProf(Clasa cl1, Clasa cl2, Clasa cl3, Materie ma);
    void AfiseazaOre();
    unsigned short CalculeazaTotalOre();
private:   
    Clasa clasa1;
    Clasa clasa2;
    Clasa clasa3;
    Materie _materie;
};

#endif // NORMAPROF_H
