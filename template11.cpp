#include<iostream>
using namespace std;
template<class t>
class test
{
    t a,b;
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
    t c;
    c=a*b;
    cout<<"\n Product No is "<<c;
}
};
int main()
{
    test<int> t1;
    t1.get();
    t1.show();
    t1.product();
}
