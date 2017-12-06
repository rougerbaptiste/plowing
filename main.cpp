#include <iostream>
#include "Soil.h"

using namespace std;

int main()
{
    Soil david;
    //double a (david.getFertility());
    cout << david.getFertility() << endl;
    david.setFertility(50);
    cout << david.getFertility() << endl;
    cout << david.getStock() << endl;
    david.setStock(12);
    cout << david.getStock() << endl;
    cout << david.getWheatExists() << endl;
    david.setWheatExists();
    cout << david.getWheatExists() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
