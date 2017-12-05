#include <iostream>
#include "Soil.h"
#include "Wheat.h"
#include "Grass.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Soil testSoil ();
    cout << testSoil.getFertility();
    return 0;
}
