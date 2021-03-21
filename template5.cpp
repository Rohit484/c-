#include<iostream>
using namespace std;
template<class t>
void swap1(t &a,t &b)
{
    t c;
    c=a;
    a=b;
    b=c;

}
int main()
{
       int a=10,b=20;
       float c=2.3,d=3.4;
       char e='R',f='S';
       cout<<"\n Before Swapping: ";
       cout<<"A "<<a<<",B "<<b<<endl;
       cout<<"C "<<c<<",D "<<d<<endl;
       cout<<"E "<<e<<",F "<<f<<endl;
       swap1(a,b);
       swap1(c,d);
       swap1(e,f);
       cout<<"\n After Swapping: ";
       cout<<"A "<<a<<",B "<<b<<endl;
       cout<<"C "<<c<<",D "<<d<<endl;
       cout<<"E "<<e<<",F "<<f<<endl;


}
