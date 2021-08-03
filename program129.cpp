#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,temp,hcf,lcm;
    cout<<"Enter two values: "<<endl;
    cin>>c>>d;
    a=c;
    b=d;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(c*d)/hcf;
    cout<<"HCF: "<<hcf<<endl;
    cout<<"LCM : "<<lcm<<endl;

}
