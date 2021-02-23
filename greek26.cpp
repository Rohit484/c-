#include<iostream>
using namespace std;
class Solution
{
public:
   /* void fillLPS(int *lps,string &str)
    {
        int len=0;i=1;
        lps[0]=0;
        int n=str.length();
        while(i<n)
        {
            if(str[i]==str[len])
                lps[i++]=++len;
            else
            {
                if(len==0)
                    lps[i++]=0;
                else
                    len=lps[len-1];
            }
        }
    }*/
    int maxFrequency(string str)
    {
        string lps;
    int n=str.length();
    for(int i=1;i<n;++i)
    {
        if(str.substr(0,i)==str.substr(n-i,i))
        {
            lps=str.substr(0,i);
            break;
        }
    }
    int ans=0;
    for(int i=0;i<=n-lps.length();++i)
    {
        if(str[i]==lps[0])
        {
            int j=0;
            for(j=0;j<lps.length();++j)
            {
                if(lps[j]!=str[i+j])
                    break;
            }
            if(j==lps.length())
                ++ans;
        }
    }
    return ans;
    }
};
