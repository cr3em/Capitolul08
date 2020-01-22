#ifndef CURSANT_H
#define CURSANT_H
#include "persoana.h"

class Cursant : public Persoana
{
public:
    Cursant(std::string prenume, std::string nume, std::string materie);
    std::string GetNumeComplet() {return ("Cursant: " + Persoana::GetNumeComplet());}
    std::string Activitate();
    void SetNotaTeme(double notaTema) {_notaTeme = notaTema;}
    void SetNotaTeste(double notaTest) {_notaTeste = notaTest;}
    void SetNotaProiect(double notaProiect) {_notaProiect = notaProiect;}
    std::string Absolva();
private:
    double _notaTeme;
    double _notaTeste;
    double _notaProiect;
    bool HasGrades();
    bool IsAverageOk();
};

#endif // CURSANT_H
