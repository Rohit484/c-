#include<iostream>
using namespace std;
vector<int>dfsOfGraph(int V, vector<int> adj[])
{
vector<int> res;
stack<int> tac;
vector<bool> vis(V, false);
tac.push(0);
int curr;
while(!tac.empty())
{
curr = tac.top(); tac.pop();
if(!vis[curr])
{
res.push_back(curr);
vis[curr] = true;
for(int i = adj[curr].size() - 1; i >= 0; i--)
if(!vis[adj[curr][i]])
tac.push(adj[curr][i]);
}
}
return res;
}
