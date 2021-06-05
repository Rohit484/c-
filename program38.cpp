#include<iostream>
using namespace std;
class Solution
{
    int findMaximum(int arr[], int n) {
int low = 0;
int high = n - 1;
int ans = -1;
while (low <= high) {
int mid = (low + high) / 2;
if (arr[mid] >= arr[mid + 1]) {
ans = max(ans, arr[mid]);
high = mid - 1;
}
else
low = mid + 1;
}
if (ans == -1)
return arr[n - 1];
else
return ans;
}
};
