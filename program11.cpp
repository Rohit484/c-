#include<iostream>
using namespace std;
class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
{
sort(A,A+N);
int sum_;
int min_diff = INT_MAX;
for(int c = N-1; c >= 2; c--){
int a = 0;
int b = c-1;
int curr_sum = A[c];
while(a < b){
int curr_sum_total = A[a] + A[b] + curr_sum;
int curr_diff = abs(A[a] + A[b] + curr_sum - X);
if(curr_sum_total > X){
if(min_diff > curr_diff){
min_diff = curr_diff;
sum_ = curr_sum_total;
}
b--;
}
else if(curr_sum_total < X){
if(min_diff > curr_diff){
min_diff = curr_diff;
sum_ = curr_sum_total;
}
a++;
}
else if(curr_sum_total == X)
return curr_sum_total;
}
}
return sum_;
}
};

