#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the number:-"<<endl;
    cin>>no;
    if(no>0)
    {
        cout<<"You Enterd a positive value:"<<no<<endl;
    }
    else if(no<0)
    {
        cout<<"You enterd a negatie value:"<<no<<endl;
    }
    else if(no==0)
        cout<<"You enterd a zero value:"<<no<<endl;
}
