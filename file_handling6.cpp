#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("hack42.cpp");
    char c;
    int chr;
    //c=in.get();
   while(in)
   {
       cout<<c;
       c=in.get();
       chr++;
   }
   cout<<"\nTotal character in file is: "<<chr;
   in.close();
}
