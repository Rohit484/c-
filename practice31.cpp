#include<iostream>
using namespace std;
int main()
{
    char button;
    cin>>button;
    switch(button)
    {
        case 'a' : cout<<"Hello"<<endl;
        break;
        case 'b' : cout<<"B"<<endl;
        break;
        case 'c' : cout<<"C"<<endl;
        break;
        default:
        cout<<"Here Nothing"<<endl;
        break;
    }
}
