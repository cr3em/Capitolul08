#ifndef JANTA_H
#define JANTA_H

enum MatJanta {tabla, aluminiu};

class Janta
{
public:
    Janta();
    Janta(short, MatJanta, short);
    void SchimbaJanta(MatJanta, short);
private:
    short _nrPrezoane;
    MatJanta _matJanta;
    short _diametru;
};

#endif // JANTA_H
