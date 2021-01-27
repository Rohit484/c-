#include<iostream>
using namespace std;
class person
{
    char name[15],address[10];
public:
    void getperson()
    {
        cout<<"\n Name; ";
        cin>>name;
        cout<<"\n Address:-";
        cin>>address;

    }
    void showperson()
    {
        cout<<"\n Name:- "<<name<<endl;
        cout<<"\n Address:- "<<address<<endl;
    }
};
class student : public person
{
    int rollno,marks;
public:
    void getstudent()
    {
        cout<<"\nRoll No:-";
        cin>>rollno;
        cout<<"\nMarks:-";
        cin>>marks;
    }
    void showstudent()
    {
        cout<<"\n Roll No:- "<<rollno;
        cout<<"\n Marks:-"<<marks;
    }
};
int main()
{
    student s1;
    s1.getperson();
    s1.getstudent();
    s1.showstudent();
    s1.showperson();
}
