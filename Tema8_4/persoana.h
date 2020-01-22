#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>

class Persoana
{
public:
    Persoana(std::string prenume, std::string nume, std::string materie);
    std::string Activitate();
    std::string Get_Prenume() {return _prenume;}
    std::string Get_Materie() {return _materie;}
protected:
    std::string GetNumeComplet() {return (_prenume + _nume);}
    void SetPrenume(std::string prenume) {_prenume = prenume;}
    void SetNume(std::string nume) {_nume = nume;}
    void SetMaterie(std::string materie) {_materie = materie;}
private:
    std::string _prenume;
    std::string _nume;
    std::string _materie;
};

#endif // PERSOANA_H
