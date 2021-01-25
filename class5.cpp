#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
public:
     rectangle()
    {
        cout<<"Enter Lenght:- ";
        cin>>length;
        cout<<"Enter Breadth:- ";
        cin>>breadth;
    }
    void show()
    {
        cout<<"Length:- "<<length<<endl;
        cout<<"Breadth:- "<<breadth<<endl;
    }
    void area()
    {
       int ar=length*breadth;
       cout<<"Area is:-"<<ar;
    }
};
int main()
{
    rectangle r1;
    r1.show();
    r1.area();

}
