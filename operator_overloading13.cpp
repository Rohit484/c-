#include<iostream>
#include<string.h>
using namespace std;
class text
{
    char str[10];
public:
    text(char s[])
    {
        strcpy(str,s);
    }
    void show()
    {
        cout<<"\n"<<str;
    }
    void operator +=(text t)
    {
        strcat(str,t.str);
    }
};
int main()
{
    text t1("Hello ") ,t2("Everyone");
    t1+=t2;
    t1.show();
    t2.show();
}
