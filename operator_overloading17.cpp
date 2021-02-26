#include<iostream>
using namespace std;
class demo1
{
    public:
    int a;
public:
    demo1(int i)
    {
        a=i;
    }
    friend void sum(demo1);
};
void sum(demo1 s)
{
    int total=s.a+100;
    cout<<"\n Total "<<total;
}
int main()
{
    int s;
    cout<<"Enter the first value: ";
    cin>>s;
    demo1 d1(s);
    sum(d1);
}
