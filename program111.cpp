#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    int i=0,j=0;
    while(s[i])
    {
        if(s[i]!=' ')
            s[j++]=s[i];
        i++;
    }
    s[j]='\0';
    cout<<s;

    return 0;
}
