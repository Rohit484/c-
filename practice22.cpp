#include<iostream>
using namespace std;
int main()
{
    int no1,no2,i,j;
    cin>>no1>>no2;
    for(i=no1;i<=no2-1;i++){
        for(j=2;j<i;j++)
            if(i%j==0)
            break;
        if(j==i)
            cout<<" "<<i<<endl;
    }
}
