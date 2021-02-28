#include<iostream>
using namespace std;
class Test
{
private:
    static int cont;
public:
    Test& fun();
};
int Test::cont=0;
Test& Test::fun()
{
    Test::cont++;
    cout<<"\n"<<Test::cont<<" ";
    return *this;
}
int main()
{
    Test t;
    t.fun();
    t.fun();
    t.fun();
    t.fun();
    return 0;
}
