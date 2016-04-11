#include <iostream>
#include <fstream>
#include "Player.h"
using namespace std;
int main()
{
    int number;
    string surname;
    string country;
    double points;
    Player* player=new Player[2];
    for(int i=0;i<2;i++)
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
    ofstream arrayData("Players.txt");
    for(int i=0;i<2;i++)
    {
        arrayData<<player[i].getNumber()<<" ";
        arrayData<<player[i].getSutname()<<" ";
        arrayData<<player[i].getCountry()<<" ";
        arrayData<<player[i].getPoints()<<"\n";
    }
    return 0;
}
