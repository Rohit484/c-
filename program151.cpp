#include<iostream>
using namespace std;
class Solution
{
public:
    void DFSRec(vector<int> adj[], int u, stack<int> &st, vector<bool> &visited)
{
    visited[u] = true;

    for(auto v: adj[u])
    {
        if(visited[v] == false)
        {
            DFSRec(adj, v, st, visited);
        }
    }

    st.push(u);
}

string topologicalSort(vector<int> adj[], int V)
{
    stack<int> st;
    vector<bool> visited(V, false);

    for(int v=0; v < V; v++)
    {
        if(adj[v].size())
        {
            for(auto u: adj[v])
            {
                if(visited[u] == false)
                {
                    DFSRec(adj, u, st, visited);
                }
            }
        }
    }

    string res;
    while(st.empty() == false)
    {
        res += st.top() + 'a';;

        st.pop();
    }

    return res;
}

string findOrder(string words[], int N, int K)
{
    vector<int> adj[K];

    for(int i = 0; i < N-1; i++)
    {
        string word1 = words[i];
        string word2 = words[i+1];

        for(int j = 0; j < min(word1.size(), word2.size()); j++)
        {
            if(word1[j] != word2[j])
            {
                int index1 = word1[j] - 'a';
                int index2 = word2[j] - 'a';

                adj[index1].push_back(index2);

                break;
            }
        }
    }

    return topologicalSort(adj, K);
}
};
