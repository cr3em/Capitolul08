#include "cerc.h"
#include <cmath>

static double PI = 3.14;

Cerc::Cerc(double _r) {
    _raza = _r;
}

double Cerc::Arie() {
    return PI*pow(_raza,2);
}
