#include<iostream>
#include<string.h>
using namespace std;
class university
{
    char uname[34],city[15];
public:
    university(char unm[] , char ct[])
    {
        strcpy(uname,unm);
        strcpy(city,ct);
    }
    void showuniversity()
    {
        cout<<"\n University Name:- "<<uname;
        cout<<"\n Locacated at:- "<<city;

    }
};
class college : public university
{
    char type[24];
    int affno;
public:
    college(char ty[], int no,char nam[], char city[]) : university(nam,ct);
    {
        strcpy(type,ty);
        affno=no;
    }
    void showcollege()
    {
        cout<<"\nCollege Type "<<type;
        cout<<"\n Affiliation Number:- "<<affno;

    }
};
class dept : public college
{
    int nos;
public:
    dept(char nm[], char city[], char ty[],int s) : college(ty,no,nm,city)
    {
        nos=s;
    }
    void showdept()
    {
        cout<<"\n No. Of Student "<<nos;
    }
};
int main()
{
     char uname[23],location[20],type[34];
     int afno, stud;
     cout<<"\n Enter The University Name:- ";
     cin>>uname;
     cout<<"\n Enter Location:- ";
     cin>>location;
     cout<<"\n Enter the University Type:- ";
     cin>>type;
     cout<<"\n Enter the Afflitiation number ";
     cin>>afno;
     cout<<"\n Enter the Number of Student:- ";
     cin>>stud;
    dept d1(uname,location,type,afno,stud);
    d1.showuniversity();
    d1.showcollege();
    d1.showdept();


}
