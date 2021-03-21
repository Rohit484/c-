#include<iostream>
using namespace std;
int main()
{
    int a=4;
 int    &b=a;
    cout<<"\n A "<<a;
    cout<<"\n B "<<b;
    a+=10;
    cout<<"\n A "<<a;
    cout<<"\n B "<<b;
}
