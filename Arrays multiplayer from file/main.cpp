#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
vector<int> A;//Inicializaciq na masiva s promenliva duljina
vector<int> B;
int main()
{
    int a;
    int b;
    int result=0;
    ifstream fin("Array_data.txt");
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin >>a >>b; //Dostupvame ot faila purvata redica za masiv A a vtorata za B
            A.push_back(a);//Vkarvame v masiva promenlivite ot tip int vuv masiva
            B.push_back(b);
        }
    }
    for(int i=0;i<A.size();i++)//For cikul za dostupvane na elementite na masiva A.size() pokazva razmera na masiva
    {
        int sum =A.at(i)*B.at(i);//Umnojavame dvete stoinosti
        cout<<A.at(i)<<' '<<B.at(i)<<" Multiplied= "<<sum<<'\n';
        result+=sum;//Pravim rezultat na vsickite umnojeni chisla
    }
    cout<<"_____________________________\n";
    cout<<"Final result is= "<<result;
    return 0;
}
