#include<iostream>
using namespace std;
int main()
{
    int no1,no2,no3;
    cout<<"Enter three numbers:-"<<endl;
    cin>>no1>>no2>>no3;
    if(no1>no2 && no1>no3)
    {
        cout<<"This value is greater:-"<<no1<<endl;
    }
    else if(no2>no1 && no2>no3)
    {
        cout<<"This value is greater:-"<<no2<<endl;
    }
    else if(no3>no1 && no3>no2)
    {
        cout<<"This value is greater:-"<<no3<<endl;
    }

}
