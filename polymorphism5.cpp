#include<iostream>
using namespace std;
class parent
{
public:
    void show(char c)
    {
        cout<<"\nCalled with char: "<<c;
    }
};
class child : public parent
{
public:
    void show(int a)
    {
        cout<<"\nCalled with int "<<a;
    }
};
int main()
{
    child c;
    c.show('R');
    c.show(10);
}
