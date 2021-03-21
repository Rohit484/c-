#include<iostream>
using namespace std;
template<class t1,class t2>
void sum(t1 a, t2 b)
{
    t2 c;
    c=a+b;
    cout<<"\n Sum is "<<c;
}
int main()
{
    sum(10,20);
    sum(3.4,2.3);
    sum(20,4.7);
}
