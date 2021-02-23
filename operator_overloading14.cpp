#include<iostream>
using namespace std;
class demo
{
    int a;
public:
    demo(int i)
    {
        a=i;
    }
    void show()
    {
        cout<<"\n"<<a;
    }
    void operator +=(demo d)
    {
        a+=d.a;
    }
};
int main()
{
    demo d1(25),d2(60);
    d1+=d2;
    d1.show();
}
