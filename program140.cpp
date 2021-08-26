#include<iostream>
using namespace std;
class Solution
{
    public:
    int maximumPath(int N, vector<vector<int>> arr)
{

for(int i = N - 1; i >= 0; i--) {
for(int j = 0; j < N; j++) {

int b = (i == N - 1) ? 0 : arr[i + 1][j];
int b_left = (i == N - 1 or j == 0) ? 0 : arr[i + 1][j - 1];
int b_right = (i == N - 1 or j == N - 1) ? 0 : arr[i + 1][j + 1];

arr[i][j] += max(b, max(b_left, b_right));
}
}

int ans = 0;

for(int j = 0; j < N; j++) {
ans = max(ans, arr[0][j]);
}

return ans;
}
};
