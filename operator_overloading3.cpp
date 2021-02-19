#include<iostream>
using namespace std;
class multiplication
{
public:
    int mul(int a, int b)
    {
        return a*b;
    }
    int mul(int a , int b, int c)
    {
        return a*b*c;
    }
    double mul(double a,double b)
    {
        return a*b;
    }
};
int main()
{
    multiplication obj;
    int x,y;
    cout<<"\n Enter the two values: ";
    cin>>x>>y;
    cout<<obj.mul(x,y)<<endl;
    cout<<obj.mul(2,5)<<endl;
    cout<<obj.mul(7,3,1)<<endl;
    cout<<obj.mul(8,9,4)<<endl;
    cout<<obj.mul(4.4,10.8)<<endl;
}
