#ifndef MENTOR_H
#define MENTOR_H
#include "persoana.h"

class Mentor : public Persoana
{
public:
    Mentor(string prenume, string nume, string materie);
    string GetNumeComplet() {return ("Mentor " + Persoana::GetNumeComplet());}
    string Activitate();
    void SchimbaMaterie(string materie);
    void SchimbaMentor(string prenume, string nume);
private:
    double _notaTeme;
    double _notaTeste;
    double _notaProiect;
};

#endif // MENTOR_H
