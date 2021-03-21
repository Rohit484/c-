#include<iostream>
using namespace std;
template<class t1, class t2 >
void swap1(t1 &a,t2 &b)
{
    t1 c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a=1,b=2;
    float c=4.6,d=2.5;
    swap1(a,b);
    swap1(c,d);

    cout<<"\n A "<<a<<", B "<<b;
    cout<<"\n C "<<c<<", D "<<d;
    cout<<"\nA "<<a;
    cout<<"\nD "<<d;
    swap1(a,d);
    cout<<"\n A "<<a<<", D "<<d;
}
