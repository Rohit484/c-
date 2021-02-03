#include<iostream>
using namespace std;
class parent1
{
public:
    parent1()
    {
        cout<<"\n Parent1  Class:- ";
    }
};
class parent2
{
public:
    parent2()
    {
        cout<<"\n parent 2 class:- ";
    }
};
class child : public parent1,parent2
{
public:
    child()
    {
        cout<<"\n Child Class:- ";
    }
};
int main()
{
    child c;
}
