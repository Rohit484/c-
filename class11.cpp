#include<iostream>
using namespace std;
class sum
{
public:
    int no1,no2,sm;
    sum()
    {
        cout<<"Enter the first value:-";
        cin>>no1;
        cout<<"Enter the second value:-";
        cin>>no2;

    }
    int calculation()
    {
        sm=no1+no2;
        return(sm);
    }
    void show()
    {
        cout<<"Your total sum is:- "<<sm;
    }
};
int main()
{
    sum s1;

    s1.calculation();
    s1.show();
}
