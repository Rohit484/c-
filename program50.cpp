#include<iostream>
using namespace std;
class Solution
{
public:
    vector<int> calculateSpan(int price[],int n)
    {
        stack<int>s;
        vector<int>v;
        s.push(0);
        v.push_back(1);
        int i;
        for(i=1;i<n;i++)
        {
            while(s.empty()==false&&price[s.top()]<=price[i])
            {
                s.pop();
            }
            int span=s.empty()?i+1:i-s.top();
            v.push_back(span);
            s.push(i);
        }
        return v;
    }
};
