#ifndef ANVELOPA_H
#define ANVELOPA_H
#include <string>

enum TipAnvelopa {iarna, vara, universal};

class Anvelopa
{
public:
    Anvelopa();
    Anvelopa(std::string, double, TipAnvelopa);
    double GetPresiune() {return _presiune;}
    TipAnvelopa GetAnvelopa() {return _tipAnvelopa;}
    void UmflaAnvelopa(double presiune);
private:
    std::string _brand;
    double _presiune;
    TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H
