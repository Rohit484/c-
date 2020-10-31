#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter your three number ";
    cin>>n1>>n2>>n3;
    if(n1>=n2 &&n1>=n3)
    {
        cout<<"\nthe number is largest"<<n1;
    }
    else if(n2>=n2 && n2>=n3)
    {
        cout<<"\nLargest number is "<<n2;
    }
    else if(n3>=n1 && n3>=n2)
    {
        cout<<"\n Largest number is "<<n3;
    }

}

