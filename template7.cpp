#include<iostream>
using namespace std;
void show(int &a)
{
    a+=10;
    cout<<a;
}
int main()
{
    int i=20;
    show(i);
    cout<<"\n I "<<i;
}
