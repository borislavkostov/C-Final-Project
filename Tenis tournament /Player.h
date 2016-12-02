#ifndef PLAYER_H
#define PLAYER_H


class Player
{
public:
    Player()
    {
    }
    ~Player()
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
    std::string getSutname()
        {
            return this->surname;
        }
    void setSurname(std::string surname)
        {
            this->surname=surname;
        }
    std::string getCountry()
        {
            return this->country;
        }
    void setCountry(std::string country)
        {
            this->country=country;
        }
    double getPoints()
        {
            return this->points;
        }
    void setPoints(double points)
        {
            this->points=points;
        }
private:
    int number;
    std::string surname;
    std::string country;
    double points;


};

#endif // PLAYER_H
