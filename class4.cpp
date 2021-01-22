#include<iostream>
#include<string.h>
using namespace std;
class vehicle
{
    int regno,mileage;
    char company[20];
public :
    void input(int no, int mile, char co[])
    {
        regno=no;
        mileage=mile;
        strcpy(company,co);
    }
    void output()
    {
        cout<<"Enter the regno:-"<<regno<<endl;
        cout<<"Enter the Milege:-"<<mileage<<endl;
        cout<<"Enter the company:-"<<company<<endl;

    }

};
int main()
{
    vehicle car,bike;
    int no,m;
    char comp[10];
    cout<<"Enter the Range:-"<<endl;
    cin>>no;
    cout<<"Enter The Milege :-"<<endl;
    cin>>m;
    cout<<"Enter the company name:-"<<endl;
    cin>>comp;
    car.input(3498,20,"BMW");
    car.output();
    bike.input(no,m,comp);
    bike.output();

}
