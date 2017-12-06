#ifndef DEF_WHEAT
#define DEF_WHEAT

#include <string>

class Wheat
{
    public:
        Wheat();
        double getGrowth();
        void setGrowth(double newGrowth);
        int getProduction();
        void setProduction(int newProduction);
        bool getExists();
        void setExists();

    private:
        double m_growth;
        int m_production;
        bool m_exists;
};

#endif
