//ROHIT PANDEY
//string add

#include <bits/stdc++.h>
using namespace std;

int main()
{   string str1="", str2="";

    cout<<"Enter String 1:\n";
    cin>>str1;
    cout<<"Enter String 2:\n";
    cin>>str2;

    str1.append(str2);
    cout<<"Concatenated String:"<<endl;
    cout<<str1;
}
