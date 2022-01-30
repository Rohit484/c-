#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
       //cout<<"Enter the numbers; "<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
