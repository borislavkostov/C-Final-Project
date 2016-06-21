#ifndef LAPTOP_H
#define LAPTOP_H



class laptop
{
public:
    laptop()
    {
    }
    ~laptop()
    {
    }
    int getNumber()
        {
            return this->number;
        }
        void setNumber(int number)
        {
            this->number=number;
        }
    std::string getModel()
        {
            return this->model;
        }
    void setModel(std::string model)
        {
            this->model=model;
        }
    std::string getRam()
        {
            return this->ram;
        }
    void setRam(std::string ram)
        {
            this->ram=ram;
        }
    double getPrice()
        {
            return this->price;
        }
    void setPrice(double price)
        {
            this->price=price;
        }
    int getProdadeni()
    {
        return this->prodadeni;
    }
    void setProdadeni(int prodadeni)
    {
        this->prodadeni=prodadeni;
    }
private:
    int number;
    std::string model;
    std::string ram;
    double price;
    int prodadeni;
};

#endif // LAPTOP_H
