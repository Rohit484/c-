#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"\n Base Class Const. ";
    }
};
class child : public base
{

};
int main()
{
    child c;
}
