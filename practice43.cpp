#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='A' && a<='Z')
    {
        cout<<"Character Formate is Capital; "<<a<<endl;
    }
    else if(a>='a' && a<='z')
    {
        cout<<"Character Formate is Small; "<<a<<endl;
    }
    else if(a>='0' && a<='9')
    {
        cout<<"Character formate is Numerical "<<a<<endl;
    }
    else
        cout<<"Enter you character: "<<a<<endl;
}
