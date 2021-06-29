#include<iostream>
using namespace std;
class Solution
{
    void find(vector<vector<int>>&m, string s, int n, int i, int j, vector<string>&ans) {
if (i == n - 1 && j == n - 1) {
ans.push_back(s);
return;
}
if (i >= 0 && j >= 0 && i < n && j < n && m[i][j]) {
m[i][j] = 0;
find(m, s + "D", n, i + 1, j, ans);
find(m, s + "L", n, i, j - 1, ans);
find(m, s + "R", n, i, j + 1, ans);
find(m, s + "U", n, i - 1, j, ans);
m[i][j] = 1;
}
return;

}
vector<string> findPath(vector<vector<int>> &m, int n) {
vector<string>ans;
if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
return ans;

string s;
find(m, s, n, 0, 0, ans);
return ans;
}
};
