#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter an integer ";
    cin>>n;
    if(n!=0)
    {
        if((n%2)==0)
        {
            cout<<"\nthe number is even "<<n;
        }
        else
            cout<<"\nthe number is odd"<<n;
    }
    else
        cout<<"\nthe number is 0 and it is neither even and odd "<<endl;
    cout<<"\nthis line is always printed";
}
