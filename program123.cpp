#include<iostream>
using namespace std;
int main()
{
    int s,p,i;
    cout<<"Enter the salary: ";
    cin>>s;
    if(s>10000)
    {
        s+=2000;
        cout<<"Your salary increment is: "<<s<<endl;
    }
    else
      s+=1000;
      cout<<"Your salary increment is: "<<s<<endl;
}
