#include<iostream>
using namespace std;
class Solution{
public:
int wood_obtained_at_height(int h,int tree[],int n)
{
int i;
int ans = 0;
for(i = 0;i < n;i++)
{
if(tree[i] > h)
{
ans += (tree[i]-h);
}
}
return ans;
}
int find_height(int tree[], int n, int k)
{

int l = 0,h = 1000,ans = -1,mid;
bool found = false;
while(l <= h && (!found))
{
mid = l + (h-l) / 2;
if(wood_obtained_at_height(mid,tree,n) == k)
{
ans = mid;
found = true;
}
else if(wood_obtained_at_height(mid,tree,n) < k)
{
h = mid - 1;
}
else
{
l = mid + 1;
}
}
return ans;
}

};
