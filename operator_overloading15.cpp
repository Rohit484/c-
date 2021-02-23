#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char data[20];
public:
    String(char s[])
    {
        strcpy(data,s);
    }
    void display()
    {
        cout<<"\n"<<data;
    }
    void operator =(String ss)
    {
        strcpy(data,ss.data);
    }
};
int main()
{
    char s1[23],s2[34];
    cout<<"\n Enter string: ";
    cin>>s1;
    cout<<"\n Enter second string: ";
    cin>>s2;
    String str1(s1),str2(s2);
    str1=str2;
    str1.display();
    str2.display();
}
