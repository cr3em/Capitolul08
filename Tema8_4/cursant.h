#ifndef CURSANT_H
#define CURSANT_H
#include "persoana.h"

class Cursant : public Persoana
{
public:
    Cursant(string prenume, string nume, string materie);
    string GetNumeComplet() {return ("Cursant " + Persoana::GetNumeComplet());}
    string Activitate();
    double SetNotaTeme(double notaTema) {return _notaTeme = notaTema;}
    double SetNotaTeste(double notaTest) {return _notaTeste = notaTest;}
    double SetNotaProiect(double notaProiect) {return _notaProiect = notaProiect;}
    string Absolva();
private:
    double _notaTeme;
    double _notaTeste;
    double _notaProiect;
    bool HasGrades();
    bool IsAverageOk();
};

#endif // CURSANT_H
