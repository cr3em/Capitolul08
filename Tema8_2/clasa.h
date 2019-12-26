#ifndef CLASA_H
#define CLASA_H


class Clasa
{
public:
    Clasa(unsigned short, char, unsigned short);
    void AfiseazaOre();
    unsigned short GetOre() {return _orePeSapt;}
private:
    unsigned short _an;
    char _litera;
    unsigned short _orePeSapt;
};

#endif // CLASA_H
