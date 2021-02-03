#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

    public:
    int maxCandy(int height[], int n)
    {
        int l=0,r=n-1;
        int ans=0;
        int temp;
        while(l<r)
        {
            temp=min(height[l],height[r]);
            temp*=(r-l-1);
            if(temp>ans)
            ans=temp;
            if(height[l]<=height[r])
            l++;
            else
            r--;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}

    	Solution obj;

    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
