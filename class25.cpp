#include<iostream>
using namespace std;
class parent
{
public:
    void show()
    {
        cout<<"\n Show 1 of parent:- ";
    }
};
class child : public parent
{
public:
    void show()
    {
        parent:: show();
        cout<<"\n Show 2 of child:- ";
    }
};
int main()
{
    child c1;

    c1.show();
}
