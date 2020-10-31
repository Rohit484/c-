#include<iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    while(true){
        cout<<"Enter a number ";
        cin>>number;
        if(number<0)
        {
            break;
        }
        sum+=number;



    }
    cout<<"the sum is "<<sum;
}
