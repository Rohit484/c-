#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("demo2.txt");
    int no;
    char nm[56];
    in>>no>>nm;
    while(in)
    {
        cout<<"\n Roll No "<<no;
        cout<<"\n Name "<<nm;
        in>>no>>nm;


    }
    in.close();

}
