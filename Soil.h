#ifndef DEF_SOIL
#define DEF_SOIL

#include <string>
#include "Wheat.h"
#include "Grass.h"

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
        int getWheatProduction();
        void setWheatProduction(int newProduction);
        void changeWheatGrowth(double growthChange);
        void changeWheatProduction(int productionChange);
        bool getGrassExists();
        void setGrassExists();
        double getGrassGrowth();
        void setGrassGrowth(double newGrowth);
        int getGrassProduction();
        void setGrassProduction(int newProduction);
        void changeGrassGrowth(double growthChange);
        void changeGrassProduction(int productionChange);

    private:
        double m_fertility;
        int m_stock;
        Wheat m_wheat;
        Grass m_grass;
};

#endif
