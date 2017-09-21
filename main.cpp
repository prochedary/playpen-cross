//Test
//Radek Procházka
#include <iostream>
#include "playpen.h"

using namespace fgw;
using namespace std;

int main()
{
    fgw::playpen papir;
    papir.clear(255);
    papir.scale(20);
    papir.plot(3,3,90);
    papir.plot(2,2,90);
    papir.plot(1,1,90);
    papir.plot(0,0,90);
    papir.plot(-1,-1,90);
    papir.plot(-2,-2,90);
    papir.plot(-3,-3,90);
    papir.setplotmode(direct);
    papir.scale(20);
    papir.plot(-3,3,90);
    papir.plot(-2,2,90);
    papir.plot(-1,1,90);
    papir.plot(0,0,90);
    papir.plot(1,-1,90);
    papir.plot(2,-2,90);
    papir.plot(3,-3,90);
        papir.setplotmode(additive);
    papir.display();
    cout << "Stinkni ENTER" << endl;
    cin.get();
    return 0;
}
