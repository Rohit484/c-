#include<iostream>
using namespace std;
class Product
{
    char Title[20];
    int price;
public:
    void getProduct()
    {
        cout<<"\n Enter The Title Name:- ";
        cin>>Title;
        cout<<"\n Enter The price Name:-";
    }
    void showProduct()
    {
        cout<<"Your Title Name is:-"<<Title;
        cout<<"Your Title's price is:-"<<price;
    }
};
class Book : public Product
{
    int page;
public:
    void getBook()
    {
        cout<<"Enter The Number of page:- ";
        cin>>page;
    }
    void showBook()
    {
        cout<<"\n The Total Number of page is:- "<<page;
    }
};
class CD : public Product
{
    int time;
public:

        void getCD()
        {
            cout<<"\n Enter the Number of Minutes:- ";
            cin>>time;
        }
        void showCD()
        {
            cout<<"\n Your CD'S Total Time is :- "<<time;
        }

};
int main()
{


}
