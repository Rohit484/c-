#include<iostream>
using namespace std;
class class1
{
    int a,b;
public:
    class1(int i,int j)
    {
        a=i;
        b=j;
    }
    friend class class2;
};
class class2
{
    int c,d;
public:
    class2(int m,int n)
    {
        c=m;
        d=n;
    }
    void sum(class1 cl1)
    {
        int total=cl1.a+cl1.b+c+d;
        cout<<"\n Total of these values: "<<total;
    }
};
int main()
{
    class1 c1(2,4);
    class2 c2(6,8);
    c2.sum(c1);
}
