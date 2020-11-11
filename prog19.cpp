//Program to sort characters in ascending order by using bubble sort
#include<iostream>
using namespace std;
int main()
{
    int i,temp,j,n;
    char a[]="kamaloo";
    for(j=0; j<=7;j++)

        for(i=0;i<=7-j; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

        }
        for(i=0;i<=7;i++)
            cout<<a[i]<<"\t";

}
