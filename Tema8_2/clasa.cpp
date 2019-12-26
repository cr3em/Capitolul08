#include "clasa.h"
#include <iostream>

Clasa::Clasa(unsigned short an, char lit, unsigned short ore) : _an(an), _litera(lit), _orePeSapt(ore) {}  // constructor

void Clasa::AfiseazaOre()  // metoda care afiseaza ore/sapt ale claselor
{
    std::cout << "Clasa " << _an << _litera << ": " << _orePeSapt << " ore / sapt";
}
