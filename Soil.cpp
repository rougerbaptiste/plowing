#include "Soil.h"

using namespace std;

Soil::Soil() : m_fertility(100), m_stock(0), m_wheat()
{
    
}

double Soil::getFertility()
{
    return m_fertility;
}

void Soil::setFertility(double newFertility)
{
    m_fertility = newFertility;
    if(m_fertility <0)
    {
        m_fertility = 0;
    }
}

int Soil::getStock()
{
    return m_stock;
}

void Soil::setStock(int newStock)
{
    m_stock = newStock;
}

bool Soil::getWheatExists()
{
    return m_wheat.getExists();
}

void Soil::setWheatExists()
{
    m_wheat.setExists();
}

double Soil::getWheatGrowth()
{
    return m_wheat.getGrowth();
}

void Soil::setWheatGrowth(double newGrowth)
{
    m_wheat.setGrowth(newGrowth);
}

int Soil::getWheatProduction()
{
    return m_wheat.getProduction();
}

void Soil::setWheatProduction(int newProduction)
{
    m_wheat.setProduction(newProduction);
}

void Soil::changeWheatGrowth(double growthChange)
{
    m_wheat.changeGrowth(growthChange);
}

void Soil::changeWheatProduction(int productionChange)
{
    m_wheat.changeProduction(productionChange);
}

bool Soil::getGrassExists()
{
    return m_wheat.getExists();
}

void Soil::setGrassExists()
{
    m_wheat.setExists();
}

double Soil::getGrassGrowth()
{
    return m_wheat.getGrowth();
}

void Soil::setGrassGrowth(double newGrowth)
{
    m_wheat.setGrowth(newGrowth);
}

int Soil::getGrassProduction()
{
    return m_wheat.getProduction();
}

void Soil::setGrassProduction(int newProduction)
{
    m_wheat.setProduction(newProduction);
}

void Soil::changeGrassGrowth(double growthChange)
{
    m_wheat.changeGrowth(growthChange);
}

void Soil::changeGrassProduction(int productionChange)
{
    m_wheat.changeProduction(productionChange);
}
