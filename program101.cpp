#include<iostream>
using namespace std;
class Solution{
public:
int search(int a[], int n){
//code
int mid,begin=0,end=n;

while(begin<=end)
{
mid=begin+(end-begin)/2;
if(a[mid]==a[mid+1] && mid%2==0 || a[mid]==a[mid-1] && mid%2!=0)
begin=mid+1;
else
end=mid-1;
}
return a[begin];
}
};
