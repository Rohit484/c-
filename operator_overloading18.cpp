#include<iostream>
using namespace std;
class beta;
class alpha
{
    int a;
public:
    alpha( int i)
    {
        a=i;
    }
    friend void sum(alpha,beta);
};
class beta
{
    int b;
public:
    beta(int j)
    {
        b=j;
    }
    friend void sum(alpha,beta);
};
void sum(alpha al, beta be)
{
    int sum=al.a+be.b;
    cout<<"\n Total: "<<sum;
}
int main()
{
    alpha al(20);
    beta be(30);
    sum(al,be);
}
