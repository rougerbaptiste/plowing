#include "Soil.h"

using namespace std;
Soil::Soil() : m_fertility(100), m_stock(0)
{
    //ctor
}

Soil::~Soil()
{
    //dtor
}

double Soil::getFertility() const
{
    return m_fertility;
}

void Soil::setFertility(double newFertility)
{
    m_fertility = newFertility;
}

int Soil::getStock() const
{
    return m_stock;
}

void Soil::setStock(int newStock)
{
    m_stock = newStock;
}
