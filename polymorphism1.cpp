#include<iostream>
using namespace std;
void sum()
{
    int a,b,c;
    cout<<"\nEnter two values:";
    cin>>a>>b;
    c=a+b;
    cout<<"\nSum is:"<<c;
}
void sum(int a)
{
    int c=a+100;
    cout<<"\nsum is: "<<c;
}
void sum(int a,int b)
{
    int c=a+b+200;
    cout<<"\nSum is: "<<c;
}
int main()
{
    sum(50,60);
    sum();
    sum(10);
}
