#ifndef MENTOR_H
#define MENTOR_H
#include "persoana.h"

class Mentor : public Persoana
{
public:
    Mentor(std::string prenume, std::string nume, std::string materie);
    std::string GetNumeComplet() {return ("Mentor: " + Persoana::GetNumeComplet());}
    std::string Activitate();
    void SchimbaMaterie(std::string materie);
    void SchimbaMentor(std::string prenume, std::string nume);
private:
};

#endif // MENTOR_H
