#include<iostream>
using namespace std;
class maths
{
public:
    void product()
    {
        int a,b,c;
        cout<<"\nEnter two values: ";
        cin>>a>>b;
        c=a*b;
        cout<<"\n Product is: "<<c;
    }
    void product(int a)
    {
        int c=a*2;
        cout<<"\nProduct is:"<<c;
    }
};
int main()
{
    maths m;
    m.product();
    m.product(5);
}
