#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("demo1");//CREATE OR OVERWRITE
    out<<"\n This is a simple file ";
    out.close();
}
