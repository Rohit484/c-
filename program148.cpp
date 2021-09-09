#include<iostream>
using namespace std;
class Solution
{
public:
    bool isCyclic(unordered_map<int,vector<int>>&m,vector<bool>&vis,vector<bool>&stk,int curr)
    {
        vis[curr]=true;
        stk[curr]=true;
        for(auto it:m[curr])
        {
            if(!vis[it] && isCyclic(m,vis,stk,it))
            {
                return true;
            }
            else if(stk[it])
            {
                return true;
            }
        }
        stk[curr]=false;
        return false;
    }
	bool isPossible(int N, vector<pair<int,int>>& prerequisites)
	{
	    unordered_map<int,vector<int>>m;
	    for(int i=0;i<prerequisites.size();i++)
	    {
	        m[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    vector<bool>vis(N+1,false),stk(N+1,false);
	    for(int i=0;i<N;i++)
	    {
	        if(!vis[i] && isCyclic(m,vis,stk,i))
	        {
	            return false;
	        }
	    }
	    return true;
	}
};
