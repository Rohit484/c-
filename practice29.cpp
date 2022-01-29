#include<iostream>
using namespace std;
int main()
{
    int no,i,j;
    cin>>no;
    for(i=2;i<=no-1;i++)
    {
        if(no%i==0)
        {
             cout<<"Non Prime Number:"<<endl;
             break;
        }


    }
    if(i==no)
    cout<<"This is a prime number"<<endl;


}
