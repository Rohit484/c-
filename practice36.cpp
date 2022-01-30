#include<iostream>
using namespace std;
int main()
{
    int input[1000],output[1000],count,i;
    cout<<"Enter the size of array; "<<endl;
    cin>>count;
    for(i=0;i<count;i++)
    {
        cin>>input[i];
    }
    for(i=0;i<count;i++)
    {
        output[i]=input[count-i-1];
    }
    for(i=0;i<count;i++)
    {
        cout<<output[i]<<" "<<endl;
    }
}
