#include<iostream>
using namespace std;
template<typename t1>
void show(t1 a, t1 b)
{
    cout<<"\n First value is "<<a;
    cout<<"\n Second value is "<<b;
}
int main()
{
    int a,b;
    char c,d;
    float e,f;
    cout<<"Enter the A value: ";
    cin>>a;
    cout<<"Enter the B value: ";
    cin>>b;
    cout<<"Enter the C value: ";
    cin>>c;
    cout<<"Enter the D value: ";
    cin>>d;
    cout<<"Enter the E value: ";
    cin>>e;
    cout<<"Enter the f value: ";
    cin>>f;
    show(a,b);
    show(c,d);
    show(e,f);
}
