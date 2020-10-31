#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter a day number ";
    cin>>day;
    switch(day<=7)
    {
        case '1' : cout<<"this is monday";
                     break;
        case '2' : cout<<"this is tuesday";
                 break;
        case '3' : cout<<"this is  wednesday";
                  break;
        case '4' : cout<<"this is thersday";
                  break;
        case '5' : cout<<"this is friday";
                    break;
        case '6' :   cout<<"this is saturday";
                  break;
         case '7' : cout<<"this is a sunday";

    }
    default : cout<<"this is unvalid number"<<day;

}
