#include <iostream>
#include <fstream>
#include "laptop.h"
using namespace std;

int main()
{
    int a;
    int number;
    string model;
    string ram;
    double price;
    int prodadeni;
    laptop* laptops=new laptop[2];
    cout<<"*****MENU******\n";
    cout<<"{1}-Dostavki\n";
    cout<<"{2}-Prodajbi\n";
    cout<<"{3}-Nalichnost\n";
    cin>>a;
    if(a==1)
{
    ifstream fin("Dostavki.txt");
    for(int i=0;i<2;i++)
        {
        fin >>number>>model>>ram;
    laptops[i].setNumber(number);
    laptops[i].setModel(model);
    laptops[i].setRam(ram);
        }
         for(int i=0;i<2;i++)
    {
        cout<<"Number : ";
        cout<<laptops[i].getNumber()<<"Model: ";
        cout<<laptops[i].getModel()<<"RAM: ";
        cout<<laptops[i].getRam()<<"\n ";
    }
}
else if(a==2)
{
        ifstream fin1("Prodajbi.txt");
        for(int i=0;i<2;i++)
        {
            fin1 >>model>>prodadeni;
            laptops[i].setModel(model);
            laptops[i].setProdadeni(prodadeni);
        }
        for(int i=0;i<2;i++)
    {
        cout<<"Model : ";
        cout<<laptops[i].getModel()<<"Prodadeni: ";
        cout<<laptops[i].getProdadeni()<<"\n ";
    }
}
else
{
 ifstream fin1("Sklad.txt");
        for(int i=0;i<2;i++)
        {
            fin1 >>number>>model;
            laptops[i].setModel(model);
            laptops[i].setNumber(number);
        }
        for(int i=0;i<2;i++)
    {
        cout<<"Model : ";
        cout<<laptops[i].getModel()<<"Number: ";
        cout<<laptops[i].getNumber()<<"\n ";
    }
}
}
