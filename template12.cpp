
#include<iostream>
using namespace std;
template<class t1 ,class t2>
class test
{
    t1 a;
    t2 b;
public:
    void get()
{
    cout<<"\n Enter First No ";
    cin>>a;
    cout<<"\n Enter second No ";
    cin>>b;
}
void show()
{
    cout<<"\n A "<<a;
    cout<<"\n B "<<b;
}
void product()
{
    t2 c;
    c=a*b;
    cout<<"\n Product No is "<<c;
}
};
int main()
{
    test<int,int> t1;
    test<float,int>t2;
    test<int,float>t3;
    t1.get();
    t1.show();
    t1.product();
    t2.get();
    t2.show();
    t2.product();
    t3.get();
    t3.show();
    t3.product();
}
