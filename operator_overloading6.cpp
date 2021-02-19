#include<iostream>
using namespace std;
class Fruits
{
public:
    void taste()
    {
        cout<<"Julicy---"<<endl;
    }
};
class Apple : public Fruits
{
public:
    void taste()
    {
        cout<<"Juicy Apple......";
    }
};
int main()
Fruits a;
a.taste();
