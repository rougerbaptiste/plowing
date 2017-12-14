#include "Field.h"

Field::Field() : m_fieldNumber(), m_soils()
{
}

bool Field::getWheatExists(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getWheatExists();
}

void Field::setWheatExists(int xpos, int ypos)
{
    m_soils[xpos][ypos].setWheatExists();
}
