#include<iostream>
using namespace std;
class employee
{
public:
    int empno,salary;
    char name[20];


    void get()
    {
        cout<<"Enter Employee name:-";
        cin>>name;
        cout<<"Enter EmpNo:-";
        cin>>empno;
        cout<<"Enter salaty:-";
        cin>>salary;
    }
    void show()
    {
        cout<<"Employee Name:-"<<name<<endl;
        cout<<"Employee No:-"<<empno<<endl;
        cout<<"Emplyee Salary"<<salary<<endl;
    }

};
int main()
{
    employee e1,e2;
    e1.get();

    e1.show();
    e2.get();
    e2.show();
}
