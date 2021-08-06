#include<iostream>
using namespace std;
class solution
{
    void solve(vector<int> arr,int N,vector<int> &ans,int i,int sum)
{
if(i>N-1)
{
ans.push_back(sum);
return;
}
solve(arr,N,ans,i+1,sum+arr[i]);
solve(arr,N,ans,i+1,sum);
}
vector<int> subsetSums(vector<int> arr, int N)
{
// Write Your Code here
vector<int>ans;
int c=0;
solve(arr,N,ans,0,c);
sort(ans.begin(),ans.end());
return ans;
}
};
