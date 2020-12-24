//rohit pandey
//linear search

#include<iostream>
using namespace std;
int main()
{
    int size,array[30],key,i,j,a;
    cout<<"Enter The Size Of Array: ";
    cin>>size;
  for(j=0;j<size;j++)
    {
        cout<<"Enter "<<j<<" Element";
        cin>>array[j];
 }
 for(a=0;a<size;a++)
    {
        cout<<"array[ "<<a<<" ]  =  ";
        cout<<array[a]<<endl;
     }
 cout<<"Element To Search in Array";
 cin>>key;
 for(i=0;i<size;i++)
    {
        if(key==array[i])
        {
            cout<<"Element found at index number :  "<<i<<endl;
               break;
        }
    }


if(i != size)
    {
        cout<<"element FOUND at index :  "<<i;
    }
else
{
    cout<<"Element  nOT fOUND in array  ";
}

}
