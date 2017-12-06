#ifndef DEF_GRASS
#define DEF_GRASS

class Grass
{
    public:
        Grass();
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
