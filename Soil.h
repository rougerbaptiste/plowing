#ifndef DEF_SOIL
#define DEF_SOIL

#include <string>
#include "Wheat.h"

class Soil
{
    public:
        Soil();
        double getFertility();
        void setFertility(double newFertility);
        int getStock();
        void setStock(int newStock);
        bool getWheatExists();
        void setWheatExists();
        double getWheatGrowth();
        void setWheatGrowth(double newGrowth);

    private:
        double m_fertility;
        int m_stock;
        Wheat m_wheat;
};

#endif
