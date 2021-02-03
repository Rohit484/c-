#include<iostream>
using namespace std;
int transfigure (string A, string B)
    {
    	int freq[256];
    	memset(freq,0,sizeof(freq));

    	for(char ch:A)
    	freq[ch-'0']++;
    	for(char ch:B)
    	freq[ch-'0']--;
    	for(int x:freq)
    	{
    	    if(x!=0)
    	    return -1;
    	}

    	int i=A.length()-1,j=B.length()-1,count=0;
    	while(i>=0 && j>=0)
    	{
    	    if(A[i]==B[j])
    	    {
    	        i--; j--;
    	    }
    	    else
    	    {
    	        count++;
    	        i--;
    	    }
    	}
    	return count;
    }
