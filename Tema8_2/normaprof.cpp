#include "normaprof.h"
#include <iostream>

NormaProf::NormaProf(Clasa cl1, Clasa cl2, Clasa cl3, Materie ma) : clasa1(cl1), clasa2(cl2), clasa3(cl3), _materie(ma) {}  // constructor

void NormaProf::AfiseazaOre()  // metodă care să afișeze orele tuturor celor trei clase
{
    clasa1.AfiseazaOre();
    std::cout << " de ";
    switch (_materie) {
        case fizica: std::cout << "fizica" << std::endl; break;
        case matematica: std::cout << "matematica" << std::endl; break;
        case chimie: std::cout << "chimie" << std::endl; break;
        case romana: std::cout << "romana" << std::endl; break;
        case sport: std::cout << "sport" << std::endl; break;
    }
    clasa2.AfiseazaOre();
    std::cout << " de ";
    switch (_materie) {
        case fizica: std::cout << "fizica" << std::endl; break;
        case matematica: std::cout << "matematica" << std::endl; break;
        case chimie: std::cout << "chimie" << std::endl; break;
        case romana: std::cout << "romana" << std::endl; break;
        case sport: std::cout << "sport" << std::endl; break;
    }
    clasa3.AfiseazaOre();
    std::cout << " de ";
    switch (_materie) {
        case fizica: std::cout << "fizica" << std::endl; break;
        case matematica: std::cout << "matematica" << std::endl; break;
        case chimie: std::cout << "chimie" << std::endl; break;
        case romana: std::cout << "romana" << std::endl; break;
        case sport: std::cout << "sport" << std::endl; break;
    }
}

unsigned short NormaProf::CalculeazaTotalOre()  // metodă care returnează totalul orelor alocate fiecărei clase
{
    std::cout << "Total ore este ";
    return clasa1.GetOre() + clasa2.GetOre() + clasa3.GetOre();
}
