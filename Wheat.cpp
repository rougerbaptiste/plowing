#include "Wheat.h"

using namespace std;

Wheat::Wheat() : m_growth(0), m_production(0), m_exists(false)
{
    //m_fertility = 100;
}

double Wheat::getGrowth()
{
    return m_growth;
}

void Wheat::setGrowth(double newGrowth)
{
    m_growth = newGrowth;
}

int Wheat::getProduction()
{
    return m_production;
}

void Wheat::setProduction(int newProduction)
{
    m_production = newProduction;
}

bool Wheat::getExists()
{
    return m_exists;
}

void Wheat::setExists()
{
    m_exists = true;
}
