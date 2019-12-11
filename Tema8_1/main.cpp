#include <iostream>
#include "cerc.h"
#include "cilindru.h"

using namespace std;

int main()
{
    Cilindru chilly{2, 5};
    cout << "Volumul lui chilly este " << chilly.Volum() << endl;
    cout << "Aria lui chilly este " << chilly.ArieCilindru() << endl;
    Cilindru *hipster[2];
    hipster[0] = new Cilindru{2, 5};
    hipster[1] = new Cilindru{5, 2};
    cout << "Volumul primului hipster este " << hipster[0]->Volum() << endl;
    cout << "Aria primului hipster este " << hipster[0]->ArieCilindru() << endl;
    cout << "Aria celui de-al doilea hipster este " << hipster[1]->Volum() << endl;
    cout << "Volumul celui de-al doilea hipster este " << hipster[1]->ArieCilindru() << endl;
    return 0;
}
