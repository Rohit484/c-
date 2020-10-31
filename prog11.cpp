#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number";
    cin>>n;
    if(n>0)
    {
        cout<<"you enterd a positive number"<<n<<endl;
    }
    else if(n<0)
    {
        cout<<"you enter a negative number"<<n;

    }
    else
        cout<<"you enterd  0.";
    cout<<"this line is always printed";


}
