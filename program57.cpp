#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4};
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]!='\0')
            count++;
    }
    cout<<"Elements in array are: "<<count;
}
