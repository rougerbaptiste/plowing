#include <iostream>
#include "Field.h"
#include "Soil.h"

// #include "Grass.h"

using namespace std;

int main()
{
//     Soil david;

    Field champs;
    int i;
    int j;
    for (i = 0 ; i < 10; i++)
    {
        for (j = 0; j <10; j++)
        {
            if (i%3==0 and j%2 ==0)
            {
                champs.setWheatExists(i,j); 
            }
        }
    }

    int time;
    for (time = 0; time < 1600; time++)
    {
        for (i = 0 ; i < 10; i++)
        {
            for (j = 0; j <10; j++)
            {
                champs.changeWheat(i,j);
            }
        }
        cout << champs.getWheatGrowth(0,0) << " " << champs.getWheatGrowth(1,0) << " " << champs.getWheatGrowth(2,0) << " " << champs.getWheatGrowth(3,0) <<endl;
        cout << champs.getWheatGrowth(0,1) << " " << champs.getWheatGrowth(1,1) << " "<< champs.getWheatGrowth(2,1) << " " << champs.getWheatGrowth(3,1) <<endl;
    }

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
