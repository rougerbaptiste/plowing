#include "Grass.h"

using namespace std;

Grass::Grass() : m_growth(0), m_production(0), m_exists(false)
{
    //m_fertility = 100;
}

double Grass::getGrowth()
{
    return m_growth;
}

void Grass::setGrowth(double newGrowth)
{
    m_growth = newGrowth;
    if(m_growth > 100)
    {
        m_growth = 100;
    }
}

int Grass::getProduction()
{
    return m_production;
}

void Grass::setProduction(int newProduction)
{
    m_production = newProduction;
}

bool Grass::getExists()
{
    return m_exists;
}

void Grass::setExists()
{
    m_exists = true;
}

void Grass::changeGrowth(double growthChange)
{
    m_growth += growthChange;
    if(m_growth > 100)
    {
        m_growth = 100;
    }
}

void Grass::changeProduction(int productionChange)
{
    m_production += productionChange;
}
