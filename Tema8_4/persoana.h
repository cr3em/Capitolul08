#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>

using namespace std;

class Persoana
{
public:
    Persoana(string prenume, string nume, string materie);
    string Activitate();
    string Get_Prenume() {return _prenume;}
    string Get_Materie() {return _materie;}
protected:
    string GetNumeComplet() {return (_prenume + _nume);}
    void SetPrenume(string prenume) {_prenume = prenume;}
    void SetNume(string nume) {_nume = nume;}
    void SetMaterie(string materie) {_materie = materie;}
private:
    string _prenume;
    string _nume;
    string _materie;
};

#endif // PERSOANA_H
