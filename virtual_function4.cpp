#include<iostream>
using namespace std;
class person
{
    char name[20];
public:
    void getname()
    {
        cout<<"\n Enter Name ";
        cin>>name;
    }
    virtual void getdata()=0;
    virtual void isoutstanding()=0;
};
class student : public person
{
    int marks;
public:
    void getdata()
    {
        getname();
        cout<<"\n Enter marks ";
        cin>>marks;
    }
    void isoutstanding()
    {
         if(marks>90)
            cout<<"\n Student outstanding ";
         else
            cout<<"\n Student is not outstanding ";
    }
};
class teacher : public person
{
    int exp;
    public:
    void getdata()
    {
        getname();
        cout<<"\n Enter Experience ";
        cin>>exp;
    }
    void isoutstanding()
    {
        if(exp>15)
        cout<<"\n Teacher is Outstanding ";
        else
            cout<<"\n Teacher is not outstanding ";
    }
};
int main()
{
    person *p[5];
    char ch;
    int t;
    cout<<"Enter the total person value ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"\n Enter S for student , T for teacher ";
        cin>>ch;
        if(ch=='S')
            p[i]=new student;
        else
            p[i]=new teacher;
        p[i]->getdata();
    }
    for(int i=0;i<t;i++)
    {
        p[i]->isoutstanding();
    }
}
