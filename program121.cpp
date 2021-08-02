#include<iostream>
using namespace std;
class solution
{
    int maxBalls(int N, int M, int a[], int b[]){
// code here
if(N == 1 && M == 2)
return 2;
int sum1 = 0, sum2 = 0, maxsum = 0;
int i = 0, j = 0;

while(i < N && j < M)
{
if(a[i] == b[j])
{
int index1 = i, index2 = j;
while(a[index1] == b[index2])
{
sum1 += a[index1++];
}
int x = index1;
index1 = i;
while(a[index1] == b[index2])
{
sum2 += b[index2++];
}
int y = index2;

maxsum += max(sum1, sum2);
sum1 = 0;
sum2 = 0;
i = x;
j = y;
}
else if(a[i] < b[j])
sum1 += a[i++];
else
sum2 += b[j++];
}
while(i < N)
{
sum1 += a[i++];
}
while(j < M)
{
sum2 += b[j++];
}
maxsum += max(sum1, sum2);
return maxsum;
}
};
