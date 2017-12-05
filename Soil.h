#ifndef SOIL_H
#define SOIL_H


class Soil
{
    public:
        Soil();
        ~Soil();
        double getFertility() const;
        void setFertility(double newFertility);
        int getStock() const;
        void setStock(int newStock);
    private:
        double m_fertility;
        int m_stock;
};

#endif // SOIL_H
