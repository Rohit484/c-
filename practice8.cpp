#include<iostream>
using namespace std;
void function1()
{
    int x=20;
    static int y=30;
    x=x+10;
    y=y+10;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    function1();
    function1();
    function1();
    function1();

}
