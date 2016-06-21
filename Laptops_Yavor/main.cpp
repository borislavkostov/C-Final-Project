#include <iostream>
#include <fstream>
#include "laptop.h"

using namespace std;

int main()
{
    int number;
    string model;
    string ram;
    double price;
    int prodadeni;
    laptop* laptops=new laptop[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter number of laptops: \n";
        cin>>number;
        laptops[i].setNumber(number);
        cout<<"Enter model of laptop:\n";
        cin>>model;
        laptops[i].setModel(model);
        cout<<"Enter RAM type (DDR3 or DDR2): \n";
        cin>>ram;
        laptops[i].setRam(ram);
        cout<<"Enter price: \n";
        cin>>price;
        laptops[i].setPrice(price);
        cout<<"Enter number of sold laptops: \n";
        cin>>prodadeni;
        laptops[i].setProdadeni(prodadeni);
    }
    ofstream arrayData("Dostavki.txt");
    for(int i=0;i<2;i++)
    {
        arrayData<<laptops[i].getNumber()<<" ";
        arrayData<<laptops[i].getModel()<<" ";
        arrayData<<laptops[i].getRam()<<"\n ";
    }
    ofstream arrayData1("Prodajbi.txt");
    for(int i=0;i<2;i++)
    {
        arrayData1<<laptops[i].getModel()<<" ";
        arrayData1<<laptops[i].getProdadeni()<<"\n";
    }
    ofstream arrayData2("Sklad.txt");
    for(int i=0;i<2;i++)
    {
        arrayData2<<laptops[i].getNumber()<<" ";
        arrayData2<<laptops[i].getModel()<<"\n";
    }

}
