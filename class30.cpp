#include<iostream>
#include<string.h>
using namespace std;
class customer
{
    char cname[12],cadd[12];
public:
    void getcust(char nm[],char add[])
    {
        strcpy(cname,nm);
        strcpy(cadd,add);
    }
    void showcust()
    {
        cout<<"\nName "<<cname;
        cout<<"\nAddress "<<cadd;
    }
};
class regular_customer : public customer
{
    int visits;
public:
    void getregular(int v,char nm[],char addr[])
    {
        getcust(nm,addr);
        visits=v;
    }
    void showregular()
    {
        showcust();
        cout<<"\nNo. of visits "<<visits;
    }
};

int main()
{
    regular_customer rc;
    int v;
    char name[10],city[10];
    cout<<"\nName ";
    cin>>name;
    cout<<"\nAddress ";
    cin>>city;
    cout<<"\nVisits ";
    cin>>v;
    rc.getregular(v,name,city);
    rc.showregular();
}
