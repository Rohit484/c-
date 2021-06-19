#include<iostream>

#include<vector>

#include<map>

#include<set>

#include<algorithm>

using namespace std;

int desc[10000];

int visited[10000];

set<int> crit;

map<int,set<int> > g;

int edges, vertices;

int currentTime = 0;

void tarjan(int u, int v) {

desc[v] = visited[v] = currentTime;

++currentTime;

for(auto adj: g[v]) {

if(visited[adj] == -1)

{

tarjan(v, adj);

if(desc[adj] < desc[v]) desc[v] = desc[adj];

if(desc[adj] == visited[adj]) {

crit.insert(v);

crit.insert(adj);

}

}

else if(adj != u) {

if(visited[adj] < desc[v]) desc[v] = visited[adj];

}

}

}

int main() {

cin >> edges;

cin >> vertices;

for(int i = 0 ; i < vertices; i++)

desc[i] = visited[i] = -1;

for(int i = 0; i < edges; i++) {

int from,to;

cin >> from;

cin >> to;

auto it = g.find(from);

if(it != g.end())

it->second.insert(to);

else {

set<int> s;

s.insert(to);

g.insert(make_pair(from, s));

}

auto it2 = g.find(to);

if(it2 != g.end())

it2->second.insert(from);

else {

set<int> s;

s.insert(from);

g.insert(make_pair(to, s));

}

}

for(int v = 0;v < vertices; v++) {

if(visited[v] == -1) {

tarjan( v, v);

}

}

vector<int> answer;

for(auto x: crit) answer.push_back(x);

sort(begin(answer), end(answer));

if(answer.size() == 0)

cout << "-1" << endl;

else {

for(auto x: answer) cout << x<< endl;

}

}
