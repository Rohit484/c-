#include<iostream>
using namespace std;
int main()
{
    int st,en,prime;
    cout<<"Enter the start value =";
    cin>>st;
    cout<<"Enter the end value =";
    cin>>en;

}
prime(int st,int en)
{
    int i,j,count;
    for(i=st;i<=en;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j=0)
                count=count+1;
        }
        if(count==2)
            cout<<i;
    }
}
