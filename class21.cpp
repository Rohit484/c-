#include<iostream>
using namespace std;
class employee
{
    int eno;
    char name[20];
public:
    void input1()
    {
        cout<<"EmpNo"<<endl;
        cin>>eno;
        cout<<"Name"<<endl;
        cin>>name;
    }
    void output1()
    {
        cout<<"Emp No"<<eno;
        cout<<"Name:-"<<name<<endl;
    }
};
class manager : public employee
{
    int deptno;
public:
    void input2()
    {
        cout<<"Enter Dept No:- "<<endl;
        cin>>deptno;
    }
    void output2()
    {
        cout<<"\nDepatNo: "<<deptno;
    }
};
int main()
{
    manager bm;
    bm.input1();
    bm.input2();
    bm.output1();
    bm.output2();
}
