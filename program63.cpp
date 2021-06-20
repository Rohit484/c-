#include<iostream>
using namespace std;
class solution
{
    int maxSum(Node *root,int &ans)
{
if(root == NULL)
return 0;
int l=INT_MIN, r=INT_MIN;
if(root->left) l = maxSum(root->left,ans);

if(root->right) r = maxSum(root->right,ans);

if(!(root->left == NULL || root->right == NULL))
ans = max(ans,l + r + (root->data));

int x=max(l,r);
if(x==INT_MIN) x=0;
return x+root->data;
}
int maxPathSum(struct Node *root)
{
//add code here.
int ans = INT_MIN;
if(!root->left)
ans=max(ans,maxSum(root->right,ans)+root->data);
else if(!root->right)
ans=max(ans,maxSum(root->left,ans)+root->data);
else
maxSum(root,ans);
return ans;
}
};
