#include<iostream>
using namespace std;
class B;
class A
{
    int i;
public:
    A(int x)
    {
        i=x;
    }
    void friend calc(A,B);
};
class B
{
    int j;
public:
    B(int y)
    {
        j=y;
    }
    void friend calc(A,B);//COMMAN FRIEND
};
void calc(A a,B b)
{
    int sum=a.i+b.j;
    cout<<"\n Sum is "<<sum;
}
int main()
{
    A a(10);
    B b(20);
    calc(a,b);
}
