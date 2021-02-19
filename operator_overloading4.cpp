#include<iostream>
using namespace std;
class complex
{
private:
    int r,i;
public:
    complex(int a=0,int b=0)
    {
        r=a;
        i=b;
    }
    complex operator +(complex const &obj)
    {
        complex res;
        res.r=r+obj.r;
        res.i=i+obj.i;
        return res;
    }
    void print()
    {
        cout<<r<<"+i"<<i<<endl;
    }
};
int main()
{
    complex c1(20,10),c2(5,7);
    complex c3=c1+c2;
    c3.print();
}
