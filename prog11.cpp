#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the number:";
    cin>>no;
    if(no>0)
    {
        if(no%2==0)
        {
            cout<<"You Enterd a positive:-"<<no<<endl;
        }
        else if(no%2==1)
            cout<<"You enterd a odd:-"<<no<<endl;

    }
     else
                cout<<"You Enterd a value is:-"<<no<<endl;
}
