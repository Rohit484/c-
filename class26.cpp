#include<iostream>
using namespace std;
class student
{
    int rollno,cls;
    char name[12];
public:
    void getstudent()
    {
        cout<<"\n Roll No:- ";
        cin>>rollno;
        cout<<"\n Class Name:- ";
        cin>>cls;
        cout<<"\n Enter Name:- ";
        cin>>name;
    }
    void showstudent()
    {
        cout<<"\n Roll Number:- "<<rollno;
        cout<<"\n Class Name:- "<<cls;
        cout<<"\n Name :- "<<name;
    }
};
class sportsman
{
    char sports[20],role[12];
    public:
        void getsports()
        {
            cout<<"\n Sports:- ";
            cin>>sports;
            cout<<"\n Playrs as:- ";
            cin>>role;
        }
        void showsports()
        {
            cout<<"\n Sports:- "<<sports;
            cout<<"\n Playrs As:- "<<role;
        }
};
class allrounder : public student , public sportsman
{
    int age;
public:
    void getall()
    {
         getstudent();
         getsports();
         cout<<"\n Age ";
         cin>>age;

    }
    void showall()
    {
        showstudent();
        showsports();
        cout<<"\nAge:- "<<age;

    }
};
int main()
{
    allrounder all;
    all.getall();
    all.showall();
}
