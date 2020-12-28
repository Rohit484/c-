//C++ Logical Operators
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    bool result;
    cout<<"Enter two number:-"<<endl;
    cin>>a>>b;
    result=(b != 5) && (a < 5);
    cout<<"This is a AND logical operator:-"<<result<<endl;
    cout<<"This is a OR logical operator:-"<<result<<endl;
    cout<<"This is a AND logical operator:-"<<result<<endl;
}
