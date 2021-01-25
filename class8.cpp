#include<iostream>
#include<string.h>
using namespace std;
class teacher
{
    int salary;
    char name[30];
public:
    teacher (char nm[78],int s)
    {
        strcpy(name,nm);
        salary=s;

    }
    void print()
    {
        cout<<"Name:-"<<name<<endl;
        cout<<"salary:-"<<salary;
    }
};


int main()
{
     teacher s1("Rohit",45678);
     s1.print();
}
