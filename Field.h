#ifndef DEF_FIELD
#define DEF_FIELD

#include "Soil.h"

class Field
{
    public:
        Field();
        
        bool getWheatExists(int xpos, int ypos);
        void setWheatExists(int xpos, int ypos);

    private:
        int m_fieldNumber;
        static const int fieldWidth = 10;
        static const int fieldHeight = 10;
        Soil m_soils [10][10];

};

#endif
