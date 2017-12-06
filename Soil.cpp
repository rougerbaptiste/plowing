#include "Soil.h"

using namespace std;

Soil::Soil() : m_fertility(100), m_stock(0), m_wheat()
{
    //m_fertility = 100;
}

double Soil::getFertility()
{
    return m_fertility;
}

void Soil::setFertility(double newFertility)
{
    m_fertility = newFertility;
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
