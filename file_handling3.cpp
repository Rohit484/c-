#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("demo1");
    char str[50];
    in>>str;
    cout<<str;
    in.close();
}
