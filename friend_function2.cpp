#include<iostream>
using namespace std;
class A
{
    int x,y;
public:
    A(int i,int j)
    {
        x=i;
        y=j;
    }
    friend class B;//B IS NOW FRIEND OF A IT CAN ACCESS THE PRIVATE DATA OR CLASS VARIABLE OF A
};
class B
{
    int m,n;
public:
    B(int i,int j)
    {
        m=i;
        n=j;
    }
    void display(A aa)
    {
        int sum=aa.x+aa.y+m+n;
        cout<<"\n Sum of all variables is  "<<sum;
    }
};
int main()
{
    A a1(10,20);
    B b1(30,40);
    b1.display(a1);
}
