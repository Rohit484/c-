#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    stringstream os;
    os<<" Software ";
    cout<<os.str();
    os.str("TestingHelp");
    cout<<os.str()<<endl;
    stringstream ss;
    ss<<"26 08 2019";
    string mystr1;
    ss>>mystr1;
    string mystr2;
    ss>>mystr2;
    string mystr3;
    ss>>mystr3;
    cout<<mystr1<<" / "<<mystr2<<" / "<<mystr3;
}
