#include<iostream>
using namespace std;
int main()
{
    int year,s;
    cout<<"Enter The Year: "<<endl;
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                cout<<"This is a loop year: "<<year;
            else
                cout<<"This is not a loop year: "<<year;
        }
        else
            cout<<"This is a leap year: "<<year;
    }
    else
        cout<<"This is not a leap year: "<<year;
    return 0;
}
