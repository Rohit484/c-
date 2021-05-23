#include<iostream>
using namespace std;
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
unordered_set<int> s;
for(int i = 0 ; i < n ; i++)
s.insert(a[i]);
int ans = 0;
for(int i = 0 ; i < m ; i++) {
if(s.find(b[i]) != s.end()) {
ans++;
s.erase(b[i]);
}
}
return ans;
}
