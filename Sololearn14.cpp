#include<iostream>
using namespace std;
int main()
{
    srand(98);
    for(int x=1;x<=10;x++)
    {
        cout<<1+(rand()%6)<<endl;
    }
}
