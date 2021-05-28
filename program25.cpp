#include<iostream>
using namespace std;
int bfs(vector<int>adj[31]) {
int src = 1;
vector<int>dist(31, 0);
dist[src] = 0;
queue<int>q;
q.push(src);
while (!q.empty()) {
int node = q.front();
q.pop();

for (auto nbr : adj[node]) {
if (dist[nbr] == 0) {
q.push(nbr);
dist[nbr] = dist[node] + 1;
}
}
}
return dist[30];
}
int minThrow(int N, int arr[]) {
vector<int>adj[31];
int board[60] = {0};
for (int i = 0; i < (2 * N); i += 2) {
board[arr[i]] = arr[i + 1] - arr[i];

}

for (int i = 0; i <= 30; i++) {
for (int dice = 1; dice <= 6; dice++) {
int j = i + dice;
j += board[i];
if (j <= 30) {
adj[i].push_back(j);
}
}
}
adj[30].push_back(30);
return bfs(adj);
}
