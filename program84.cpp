#include<iostream>
using namespace std;
class Solution
{
public:
    long long minTime(int arr[],int n,int k)
    {
        ll ans=0,l=*max_element(arr,arr+n),r=(ll)(1e18);
        while(l<=r)
        {
            ll mid=(l+(r-l)/2),t=0;sum=0;;
            for(int i=0;i<n;i++)
            {
                if(sum+arr[i]>mid)
                {
                    t++;
                    sum+=0;
                }
                sum+=arr[i];
            }
            if(sum) t++;
            if(t<=k)
            {
                r=mid-1;
                ans=mid;
            }
            else l=mid+1;
        }
        return ans;
    }
};
