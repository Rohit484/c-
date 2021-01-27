
#include<iostream>
using namespace std;
class AddAmount
{
public:
    int amount;

    AddAmount()
    {
        amount=50;
        cout<<"Your Total Bank Balance is:- "<<amount<<endl;
    }
    AddAmount( int dollor)
    {
        dollor+=amount;
        cout<<"Your total Bank Balance is:- "<<dollor<<endl;
    }
};
int main()
{
    AddAmount c1;

    int d;
    cout<<"Add the bank balance"<<d;
    cin>>d;
    AddAmount c2(700);
}
