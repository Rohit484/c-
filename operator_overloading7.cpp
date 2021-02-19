#include<iostream>
using namespace std;
class Time
{
public:

     Hours(int hou, int Min, int Sec)
    {

        cout<<"\nDuration of Hours: "<<hou;
        cout<<"\nDuration of Minutes: "<<Min;
        cout<<"\nDuration of Seconds: "<<Sec;
    }
     void operator ==(Time t)
    {
        if(t1==t.Hours)
        {
            cout<<"\nHere Time is Same: ";
        }
        else
            cout<<"\nHere Time is Not same: ";
    }


};
Time t1(4,34,6), t2(4,36,6);
t1.Hours();
t2.Hours();
t1==t2;
