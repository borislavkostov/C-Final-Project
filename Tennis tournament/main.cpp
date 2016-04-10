#include <iostream>
#include <fstream>
using namespace std;

class Player
{
public:
    int getNumber()
        {
            return this->number;
        }
        void setNumber(int number)
        {
            this->number=number;
        }
    string getSutname()
        {
            return this->surname;
        }
    void setSurname(string surname)
        {
            this->surname=surname;
        }
    string getCountry()
        {
            return this->country;
        }
    void setCountry(string country)
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
    string surname;
    string country;
    double points;


};
int main()
{
    int number;
    string surname;
    string country;
    double points;
    Player* player=new Player[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number of player: \n";
        cin>>number;
        player[i].setNumber(number);
        cout<<"Enter surname:\n";
        cin>>surname;
        player[i].setSurname(surname);
        cout<<"Enter Country: \n";
        cin>>country;
        player[i].setCountry(country);

    }
    return 0;
}
