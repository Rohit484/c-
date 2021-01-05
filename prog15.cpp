#include<iostream>
using namespace std;
int main()
{
    int no,i,j;
    j=0;
    cout<<"Enter the number:-"<<endl;
    cin>>no;
    for(i=1;i<=no;i++)
        j+=i;
    cout<<"Your total natural value sum is "<<j<<endl;
}
