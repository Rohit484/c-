#include<iostream>
using namespace std;
int count(int pattern, int arr[], int n) {
int cnt = 0;
for (int i = 0; i < n; i++) {
if ((pattern & arr[i]) == pattern)
cnt++;
}
return cnt;
}
int maxAND (int arr[], int n)
{
int ans = 0;
for (int i = 16; i >= 0; i--) {
int cnt = count(ans | (1 << i), arr, n);

if (cnt >= 2) {
ans += (1 << i);
}
}
return ans;
}
