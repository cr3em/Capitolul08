#include "masina.h"

Masina::Masina(Roata r1, Roata r2, Roata r3, Roata r4) : _roti{r1, r2, r3, r4} {}

short Masina::VerificaRoti()
{
    for(short i = 0; i < 4; i)
    {
        if(_roti[i].IsFlat() < 1)
            return i;
        else
            return -1;
    }
}

void Masina::AfiseazaStareRoti(std::string numeMasina)
{
    std::cout << numeMasina;
    int temp = VerificaRoti();
    if(temp < 0)
        std::cout << " are toate rotile in regula\n";
    else
        std::cout << " are pana la roata" << ++temp << std::endl;
}

void Masina::UmflaRoti(double presiune)
{
    for(short i = 1; i <= 4; ++i)
    {
        _roti[i].UmflaRoata(presiune);
    }
}

void Masina::UmflaRoata(short indiceRoata, double presiune)
{
    _roti[indiceRoata].UmflaRoata(presiune);
}

void Masina::SchimbaRoti(Roata r1, Roata r2, Roata r3, Roata r4)
{
    _roti[0] = r1;
    _roti[1] = r2;
    _roti[2] = r3;
    _roti[3] = r4;
}

void Masina::SchimbaRoata(short indice, Roata roata)
{
    _roti[indice] = roata;
}

void Masina::AfiseazaTipCauciucuri(std::string numaMasina)
{
    std::cout << numaMasina << " are cauciucuri ";
    if(_roti[0].GetTipAnvelopa() == _roti[1].GetTipAnvelopa() == _roti[2].GetTipAnvelopa() == _roti[3].GetTipAnvelopa())
    {
        switch (_roti[0].GetTipAnvelopa()) {
        case iarna: std::cout << "de iarna"; break;
        case vara : std::cout << "de vara"; break;
        case universal: std::cout << "allseason"; break;
        }
    }
    else
        std::cout << "mixte";
    std::cout << std::endl;
}
