#include <iostream>
#include "Field.h"
#include "Soil.h"

// #include "Grass.h"

using namespace std;

int main()
{
//     Soil david;
    Grass lil;
    cout << lil.getExists() << lil.getGrowth() << lil.getProduction() << endl;
    lil.setExists();
    lil.setGrowth(10);
    lil.setProduction(2);
    cout << lil.getExists() << lil.getGrowth() << lil.getProduction() << endl;
    lil.changeGrowth(5);
    lil.changeProduction(2);
    cout << lil.getExists() << lil.getGrowth() << lil.getProduction() << endl;
    Field champs;
    cout << champs.getWheatExists(1,1) << endl;
    champs.setWheatExists(1,1);
    cout << champs.getWheatExists(1,1) << endl;
    //double a (david.getFertility());
//     cout << david.getFertility() << endl;
//     david.setFertility(50);
//     cout << david.getFertility() << endl;
//     cout << david.getStock() << endl;
//     david.setStock(12);
//     cout << david.getStock() << endl;
//     cout << david.getWheatExists() << endl;
//     david.setWheatExists();
//     cout << david.getWheatExists() << endl;
//     cout << david.getWheatGrowth() << endl;
//     david.setWheatGrowth(20);
//     cout << david.getWheatGrowth() << endl;
//     david.changeWheatGrowth(81);
//     cout << david.getWheatGrowth() << endl;
//     cout << david.getWheatProduction() << endl;
//     david.setWheatProduction(5);
//     cout << david.getWheatProduction() << endl;
//     david.changeWheatProduction(10);
//     cout << david.getWheatProduction() << endl;
//     cout << "Hello world!" << endl;
    return 0;
}
