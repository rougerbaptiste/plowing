#ifndef DEF_FIELD
#define DEF_FIELD

#include "Soil.h"

class Field
{
    public:
        Field();
        
        // Soil methods
        double getFertility(int xpos, int ypos);
        void setFertility(double newFertility, int xpos, int ypos);
        int getStock(int xpos, int ypos);
        void setStock(int newStock, int xpos, int ypos);
        
        // Wheat methods
        bool getWheatExists(int xpos, int ypos);
        void setWheatExists(int xpos, int ypos);
        double getWheatGrowth(int xpos, int ypos);
        void setWheatGrowth(double newGrowth, int xpos, int ypos);
        int getWheatProduction(int xpos, int ypos);
        void setWheatProduction(int newProduction, int xpos, int ypos);
        void changeWheatGrowth(double growthChange, int xpos, int ypos);
        void changeWheatProduction(int productionChange, int xpos, int ypos);

        void changeWheat(int xpos, int ypos);

        // Grass methods
        bool getGrassExists(int xpos, int ypos);
        void setGrassExists(int xpos, int ypos);
        double getGrassGrowth(int xpos, int ypos);
        void setGrassGrowth(double newGrowth, int xpos, int ypos);
        int getGrassProduction(int xpos, int ypos);
        void setGrassProduction(int newProduction, int xpos, int ypos);
        void changeGrassGrowth(double growthChange, int xpos, int ypos);
        void changeGrassProduction(int productionChange, int xpos, int ypos);



    private:
        int m_fieldNumber;
        static const int fieldWidth = 10;
        static const int fieldHeight = 10;
        Soil m_soils [10][10];

};

#endif
