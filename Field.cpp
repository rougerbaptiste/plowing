#include "Field.h"

Field::Field() : m_fieldNumber(), m_soils()
{
}

double Field::getFertility(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getFertility();
}

void Field::setFertility(double newFertility, int xpos, int ypos)
{
    m_soils[xpos][ypos].setFertility(newFertility);
}

int Field::getStock(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getStock();
}

void Field::setStock(int newStock, int xpos, int ypos)
{
    m_soils[xpos][ypos].setStock(newStock);
}

bool Field::getWheatExists(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getWheatExists();
}

void Field::setWheatExists(int xpos, int ypos)
{
    m_soils[xpos][ypos].setWheatExists();
}

double Field::getWheatGrowth(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getWheatGrowth();
}

void Field::setWheatGrowth(double newGrowth, int xpos, int ypos)
{
    m_soils[xpos][ypos].setWheatGrowth(newGrowth);
}

int Field::getWheatProduction(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getWheatProduction();
}

void Field::setWheatProduction(int newProduction, int xpos, int ypos)
{
    m_soils[xpos][ypos].setWheatProduction(newProduction);
}

void Field::changeWheatGrowth(double growthChange, int xpos, int ypos)
{
    m_soils[xpos][ypos].changeWheatGrowth(growthChange);
}

void Field::changeWheatProduction(int productionChange, int xpos, int ypos)
{
    m_soils[xpos][ypos].changeWheatProduction(productionChange);
}

