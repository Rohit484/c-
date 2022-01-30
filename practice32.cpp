#include<iostream>
using namespace std;
int main()
{
    int no1,no2;
    char opt;
    cin>>no1>>no2;
    cin>>opt;
    switch(opt)
    {
    case '+':
        cout<<no1+no2<<endl;
        break;
    case '-':
        cout<<no1-no2<<endl;
        break;
    case '*' :
        cout<<no1*no2<<endl;
        break;
    default:
        cout<<"Sorry You Enter Wrong Symbol"<<endl;
        break;
        return 0;
    }
}
