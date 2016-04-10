#include <iostream>
#include <fstream>
using namespace std;
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
using namespace std;
int SecondTournament()
{
    int number;
    string surname;
    string country;
    double points;
    Player* player=new Player[2];
    ifstream fin("Player.txt");
    while (fin >> number >> surname >> country >> points)
    {
        int i=0;
        i++;
        player[i].setNumber(number);
        player[i].setSurname(surname);
        player[i].setCountry(country);
        player[i].setPoints(points);

    }
    for(int i=0;i<2;i++)
    {
        cout<<"Enter points: \n";
        cin>>points;
        player[i].setPoints(points);
    }
int i, j, flag = 1;
Player temp;
    for(i = 1; (i <= 2) && flag; i++)
    {
        flag = 0;
        for (j=0; j < (2 -1); j++)
        {
            if (player[j+1].getPoints() > player[j].getPoints())
            {
                temp = player[j];
                player[j] = player[j+1];
                player[j+1]=temp;
                flag = 1;
            }
        }
    }
    ofstream arrayData("Results from second tournament.txt");
    for(int i=0;i<2;i++)
    {
        arrayData<<player[i].getNumber()<<" ";
        arrayData<<player[i].getSutname()<<" ";
        arrayData<<player[i].getCountry()<<" ";
        arrayData<<player[i].getPoints()<<"\n";
    }
}


