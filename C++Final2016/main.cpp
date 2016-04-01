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
        double getDiploma1()
        {
            return this->diploma1;
        }
        void setDiploma1(double diploma1)
        {
            this->diploma1=diploma1;
        }
        double getDiploma2()
        {
            return this->diploma2;
        }
        void setDiploma2(double diploma2)
        {
            this->diploma2=diploma2;
        }
        double getIzpit1()
        {
            return this->izpit1;
        }
        void setIzpit1(double izpit1)
        {
            this->izpit1=izpit1;
        }
        double getIzpit2()
        {
            return this->izpit2;
        }
        void setIzpit2(double izpit2)
        {
            this->izpit1=izpit2;
        }
        double getBal()
        {
            return this->bal;
        }
        void setBal(double bal)
        {
            this->bal=bal;
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
        double bal;
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
    for(int i=0;i<3;i++)
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
        student[i].setDiploma2(diploma2);
        cout<<"\nEnter your first evaluation from exam:";
        cin>>izpit1;
        student[i].setIzpit1(izpit1);
        cout<<"\nEnter your second evaluation from exam:";
        cin>>izpit2;
        student[i].setIzpit2(izpit2);
        bal=student[i].Bal(izpit1,izpit2,diploma1,diploma2);
        student[i].setBal(bal);

    }
       int i, j, flag = 1;
      int temp;
      for(i = 1; (i <= 3) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (3 -1); j++)
         {
               if (student[j+1].getBal() > student[j].getBal())
              {
                    temp = student[j].getBal();
                    student[j] = student[j+1];
                    student[j+1].setBal(temp);
                    flag = 1;
               }
          }
     }
    ofstream arrayData("Kandidatstudenti.txt");
    for(int i=0;i<3;i++)
    {
        arrayData<<"Name :"<<student[i].getName()<<"\n"<<endl;
        arrayData<<"Surname :"<<student[i].getSurname()<<"\n"<<endl;
        arrayData<<"Number :"<<student[i].getNumber()<<"\n"<<endl;
        arrayData<<"First evaluation from diploma:"<<student[i].getDiploma1()<<"\n"<<endl;
        arrayData<<"Second evaluation from diploma:"<<student[i].getDiploma2()<<"\n"<<endl;
        arrayData<<"First evaluation from exam:"<<student[i].getIzpit1()<<"\n"<<endl;
        arrayData<<"Second evaluation from exam:"<<student[i].getIzpit2()<<"\n"<<endl;
        arrayData<<"Вашият бал е:"<<student[i].getBal()<<"\n"<<endl;
    }
    return 0;
}

