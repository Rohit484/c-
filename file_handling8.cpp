#include<iostream>
#include<fstream>
using namespace std;
class employee
{
    int empno,salary;
    char ename[15];
public:
    void input()
    {
        cout<<"\n Emp No ";
        cin>>empno;
        cout<<"\n Name ";
        cin>>ename;
        cout<<"\n Salary ";
        cin>>salary;
    }
    void output()
    {
        cout<<"\n Emp No "<<empno;
        cout<<"\n Emp Name "<<ename;
        cout<<"\n Emp Salary "<<salary;
    }
};
int main()
{
    employee e;
    char ch;
    ofstream file("empllist");
    do
    {
        e.input();
        file.write((char *)&e,sizeof(employee));
        cout<<"\n Do you want to add more (Y/N)";
        cin>>ch;
    }while(ch=='y'|| ch=='Y');
    file.close();
    ifstream in("empllist");
    in.read((char *)&e,sizeof(employee));
    while(in)
    {
        e.output();
        in.read((char *)&e,sizeof(employee));

    }

    in.close();
}
