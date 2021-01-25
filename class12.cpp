#include<iostream>
using namespace std;
class divide
{
public:
    int Qu, Re,Dividend,Divisor;
    divide()
    {
        cout<<"Enter the Dividend value:- ";
        cin>>Dividend;
        cout<<"Enter the Divisor:- ";
        cin>>Divisor;
    }
    int calculation()
    {
        Qu=Dividend/Divisor;
        Re=Dividend%Divisor;
        return(Qu);
        return(Re);
    }
    void show()
    {
        cout<<"Your Quatient value is:- "<<Qu<<endl;
        cout<<"Your Remainder value is:-"<<Re<<endl;
    }

};
int main()
{
    divide s1;


    s1.calculation();
    s1.show();

}
