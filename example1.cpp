#include<iostream>
using namespace std;
int  main()
{
    int a[100],n,result;
    cout<<"enter size of array-";
    cin>>n;
    cout<<"enter a values of array-";
    for(int i=0;i<n; i++)
    {
        cin>>a[i];
    }
    result=a[0];
    for(intj=1;j<n;j++)
    {
        if(a[j]>result)
        {
            result=a[j];
            a[j]=a[0];
            a[0]=result;
        }
    }
    result=a[1];
    for(int k=2; k<n; k++)
    {
        if(a[k]>result)
        {
            result=a[k];
        }
    }
    cout<<"second largest number is -"<<result;
}
