#include<iostream>
#include<string.h>
using namespace std;
class text
{
    char str[15];
public:
    text(char s[])
    {
        strcpy(str,s);
    }
    void show()
    {
        cout<<"\n String is "<<str;
    }
    void operator ==(text w)
    {
        int r=strcmp(str,w.str);
        if(r==0)
        {
            cout<<"\n Same string ";
        }
        else
            cout<<"\n Difference string ";
    }
};
int main()
{
    text t1("Hello"),t2("Helo");
    t1.show();
    t2.show();
    t1==t2;
}
