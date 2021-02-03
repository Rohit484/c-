#include<iostream>
using namespace std;
class customer
{
    char cname[23],cadd[25];
public:
    void getcustomer()
    {
        cout<<"\n Enter The Customer Name:- ";
        cin>>cname;
        cout<<"\n Enter the Customer Adress:- ";
        cin>>cadd;

    }
    void showcustomer()
    {
        cout<<"\n Your Customer Name:- "<<cname;
        cout<<"\n Your Customer Name:- "<<cadd;
    }
};
class regular_customer : public customer
{
    int visits;
public:
    void getregular()
    {
        cout<<"\nNumber of Visiters per Months:- ";
        cin>>visits;
    }
    void showregular()
    {
        cout<<"\ndNumber of visits:- "<<visits;
    }
};
class rich_customer : public regular_customer
{
    int avg_exp;
public:
    void getrich()
    {
        cout<<"\n Average exp per visit:- ";
        cin>>avg_exp;
    }
    void showrich()
    {
        cout<<"\n Expence per Visit:- "<<avg_exp;

    }
};
int main()
{
    rich_customer rc;
    rc.getcustomer();
    rc.getregular();
    rc.getrich();
    rc.showcustomer();
    rc.showregular();
    rc.showrich();
}






