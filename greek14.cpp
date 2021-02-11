#include<iostream>
using namespace std;

class Solution{

    public:
    vector<int> help_classmate(vector<int> arr, int n)
    {
       stack<int>s;
       vector<int>ans;
       for(int i=n-1;i>=0;i--)
       {
           while(!s.empty() && arr[s.top()]>=arr[i])
           s.pop();
           if(s.empty())
           ans.push_back(-1);
           else
           ans.push_back(arr[s.top()]);
           s.push(i);
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
