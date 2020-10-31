#include<iostream>
using namespace std;
int main()
{
    int number=0;
    int sum=0;
    do{


        sum+=number;
        cout<<"ENter a number ";
        cin>>number;

    }
    while(number>=0)
        cout<<"\n the sum is "<<sum<<endl;
}
