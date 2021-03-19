#include<iostream>
using namespace std;

template<typename t>
t mymax(t x,t y)
{
    return(x>y)?x:y;
}
int main()
{
    cout<<mymax<int>(3,7)<<endl;
    cout<<mymax<double>(3.0,7.0)<<endl;
    cout<<mymax<char>('g','e')<<endl;
}
