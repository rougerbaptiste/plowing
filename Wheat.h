#ifndef DEF_WHEAT
#define DEF_WHEAT

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
        void changeGrowth(double growthChange);
        void changeProduction(int productionChange);

    private:
        double m_growth;
        int m_production;
        bool m_exists;
};

#endif
