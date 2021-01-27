#include<iostream>
using namespace std;
class AddAmount
{
    public:

    int amount;
    amount=50;
    AddAmount()
    {
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
    balance c1;
    c1.AddAmount();
    int d;
    cout<<"Add the bank balance"<<d;
    cin>>d;
    c1.AddAmount(int d );
}
