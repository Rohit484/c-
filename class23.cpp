#include<iostream>
using namespace std;
class tollbooth
{
   int Total_no_of_car, Per_car_toll_tax,Non_pay_car_toll_tax,Total_collection_of_toll_tax;
   public:
       void paying_car()
       {
           Per_car_toll_tax=100;
           cout<<" Per Car's Toll Tax Ammount is:- "<<Per_car_toll_tax;
           cout<<"\n Enter the Total of paying car's number:- ";
           cin>>Total_no_of_car;

       }
       void Nonpaying_car()
       {
           cout<<"\n Enter the Non paying Car's Numbers:-";
           cin>>Non_pay_car_toll_tax;

       }
       void display()
       {
            cout<<"\n Total passed the cars number is:- "<<Total_no_of_car;
            Total_no_of_car*=Per_car_toll_tax;
            cout<<"\n Your total paying Car Ammount is:- "<<Total_no_of_car;
            cout<<"\n Passed Total Number of Non paying Cars:-"<<Non_pay_car_toll_tax;
            Per_car_toll_tax=0;
            cout<<"\n Total Toll Tax Ammoun is:-"<<Per_car_toll_tax;



       }


};
int main()
{
    tollbooth road;
    road.paying_car();
    road.Nonpaying_car();
    road.display();
}

