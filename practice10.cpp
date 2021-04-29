#include<iostream>
using namespace std;
int fun(string str,int i)
{
    int M=INT_MIN;
    int MI;
    for(int j=i;j<str.length();j++)
    {
        if(M<str[j])
        {
            M=str[j];
            MI=j;
        }
    }
    return MI;
}
bool biggest(string curr,string previous)
{
    for(int i=0;i<curr.length();i++)
    {
        if(previous[i]>=curr[i])
        {
            return true;
        }
    }
    return false;
}
string findMaximumNum(string str, int k)
{
   for(int i=0;i<k;i++)
   {
       string pre=str;
       int max_index=fun(str,i);
       swap(str[max_index],str[i]);
       if(biggest(str,pre)==true)
       {
           return pre;
       }
   }
   return str;
}
