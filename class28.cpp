#include<iostream>
using namespace std;
class demo
{
public:
     demo()
    {
        cout<<"\n This is a constructore:- ";
    }
    ~demo()
    {
        cout<<"\n This is a distouctore:- ";
    }

};
int main()
{
    demo d;
}

