//Program to convert the decimal number into binary number

#include<iostream>
using namespace std;
int main()
{

    int a[50],i,n,r;
    i=0;
    cout<<"Enter any number = ";
    cin>>n;
    while(n>=1)
    {
        r=n%2;
        n=n-r;
        n=n/2;
        a[i]=r;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout<<a[i];
        i--;
    }

}
