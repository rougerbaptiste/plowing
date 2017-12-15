#include "Field.h"

Field::Field() : m_fieldNumber(), m_soils()
{
}

// Soil methods
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


// Wheat methods
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

void Field::changeWheat(int xpos, int ypos)
{
    if(m_soils[xpos][ypos].getWheatExists())
    {
        int sumNeighbour (0);
        int i;
        int size (10);
        for (i =1; i < 5; i++)
        {
            if (i ==1 and xpos-1 >= 0)
            {
                sumNeighbour += m_soils[xpos-1][ypos].getWheatGrowth();
                sumNeighbour += m_soils[xpos-1][ypos].getGrassGrowth();
            }
            if (i ==2 and ypos+1 >= 0)
            {
                sumNeighbour += m_soils[xpos][ypos+1].getWheatGrowth();
                sumNeighbour += m_soils[xpos][ypos+1].getGrassGrowth();
           }
            if (i ==3 and xpos+1 < size)
            {
                sumNeighbour += m_soils[xpos][ypos+1].getWheatGrowth();
                sumNeighbour += m_soils[xpos][ypos+1].getGrassGrowth();
           }
            if (i ==4 and ypos-1 < size)
            {
                sumNeighbour += m_soils[xpos-1][ypos].getWheatGrowth();
                sumNeighbour += m_soils[xpos-1][ypos].getGrassGrowth();
           }
        }
        sumNeighbour += m_soils[xpos][ypos].getGrassGrowth();
        double growthChange ((m_soils[xpos][ypos].getFertility()*(1 - 0.95*(sumNeighbour/900)))/1600);
        m_soils[xpos][ypos].changeWheatGrowth(growthChange);
    }
}

// Grass exists
bool Field::getGrassExists(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getGrassExists();
}

void Field::setGrassExists(int xpos, int ypos)
{
    m_soils[xpos][ypos].setGrassExists();
}

double Field::getGrassGrowth(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getGrassGrowth();
}

void Field::setGrassGrowth(double newGrowth, int xpos, int ypos)
{
    m_soils[xpos][ypos].setGrassGrowth(newGrowth);
}

int Field::getGrassProduction(int xpos, int ypos)
{
    return m_soils[xpos][ypos].getGrassProduction();
}

void Field::setGrassProduction(int newProduction, int xpos, int ypos)
{
    m_soils[xpos][ypos].setGrassProduction(newProduction);
}

void Field::changeGrassGrowth(double growthChange, int xpos, int ypos)
{
    m_soils[xpos][ypos].changeGrassGrowth(growthChange);
}

void Field::changeGrassProduction(int productionChange, int xpos, int ypos)
{
    m_soils[xpos][ypos].changeGrassProduction(productionChange);
}
