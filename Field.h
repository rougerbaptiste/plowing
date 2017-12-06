#ifndef DEF_FIELD
#define DEF_FIELD

#include "Soil.h"

class Field
{
    public:
        Field(int fieldNb, int fieldWidth, int fieldHeight);

    private:
        int m_fieldNumber;
        Soil m_soils;

};

#endif
