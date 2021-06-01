#include<iostream>
using namespace std;
class solution
{
    public:
    bool canbePlaced(int mat[11][11], int n, int i, int j) {
for (int k = 0; k < i; k++)
{
if (mat[k][j] == 1)
return false;
}
int x = i, y = j, xx = i, yy = j;
while (x >= 0 && y >= 0) {
if (mat[x][y] == 1)
return false;
x--;
y--;
}

while (xx >= 0 && yy < n) {
if (mat[xx][yy] == 1)
return false;
xx--;
yy++;
}
return true;
}

bool nQueens(vector<vector<int>>&ans, int mat[11][11], int n, int i) {
if (i == n) {
vector<int>curr;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++) {
if (mat[i][j] == 1)
curr.push_back(j + 1);
}
}
ans.push_back(curr);
return false;
}
for (int j = 0; j < n; j++) {

if (canbePlaced(mat, n, i, j)) {
mat[i][j] = 1;
if (nQueens(ans, mat, n, i + 1)) {

return true;
}
mat[i][j] = 0;
}
}
return false;
}
vector<vector<int>> nQueen(int n) {
vector<vector<int>>ans;
int mat[11][11] = {0};
vector<int>curr;
nQueens(ans, mat, n, 0);
return ans;
}
};
