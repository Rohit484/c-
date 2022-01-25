#include<iostream>
using namespace std;
int main()
{
    int no,i,ans;
    cin>>no;
    for(i=2;i<=no-1;i++)
    {
        if(no%i==0)
            break;
    }
    if(no==i)
        cout<<"Number is prime"<<endl;
    else
        cout<<"Number is Not Prime"<<endl;
}
