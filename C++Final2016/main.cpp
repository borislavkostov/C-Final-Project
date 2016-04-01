#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    public:
        Student()
        {
        }
        ~Student()
        {
        }
        std::string getName()
        {
            return this->name;
        }
        void setName(std::string name)
        {
            this->name=name;
        }
        int getNumber()
        {
            return this->number;
        }
        void setNumber(int number)
        {
            this->number=number;
        }
        std::string getSurname()
        {
            return this->surname;
        }
        void setSurname(std::string surname)
        {
            this->surname=surname;
        }
        double setDiploma1(double diploma1)
        {
            return this->diploma1;
        }
        void getDiploma1()
        {
            this->diploma1=diploma1;
        }
        double setDiploma2(double diploma2)
        {
            return this->diploma2;
        }
        void getDiploma2()
        {
            this->diploma2=diploma2;
        }
        double setIzpit1(double izpit1)
        {
            return this->izpit1;
        }
        void getIzpit1()
        {
            this->izpit1=izpit1;
        }
        double setIzpit2(double izpit2)
        {
            return this->izpit2;
        }
        void getIzpit2()
        {
            this->izpit1=izpit2;
        }
        double Bal(double setDiploma1,double setDiploma2,double setIzpit1,double setIzpit2)
        {
            double bal=setDiploma1+setDiploma2+setIzpit1+setIzpit2;
            return bal*2;
        }
    protected:
    private:
        int number;
        std::string name;
        std::string surname;
        double diploma1;
        double diploma2;
        double izpit1;
        double izpit2;
};

int main()
{
    string name;
    string surname;
    int number;
    double diploma1;
    double diploma2;
    double izpit1;
    double izpit2;
    double bal;
    Student* student=new Student[5];
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter name:";
        cin>>name;
        student[i].setName(name);
        cout<<"\nEnter surname:";
        cin>>surname;
        student[i].setSurname(surname);
        cout<<"\nEnter number:";
        cin>>number;
        student[i].setNumber(number);
        cout<<"\nEnter your first evaluation from diploma:";
        cin>>diploma1;
        student[i].setDiploma1(diploma1);
        cout<<"\nEnter your second evaluation from diploma:";
        cin>>diploma2;
        student[i].setDiploma1(diploma2);
        cout<<"\nEnter your first evaluation from exam:";
        cin>>izpit1;
        student[i].setDiploma1(izpit1);
        cout<<"\nEnter your second evaluation from exam:";
        cin>>izpit2;
        student[i].setDiploma1(izpit2);
        bal=student[i].Bal(izpit1,izpit2,diploma1,diploma2);
        cout<<"Bal = "<<bal<<endl;

    }
    for(int i=0;i<5;i++)
    {
        cout<<student[i].getName();
        cout<<"\n";
        cout<<student[i].getSurname();
        cout<<"\n";
        cout<<student[i].getNumber();
        cout<<"\n";
    }

    return 0;
}
