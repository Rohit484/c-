#include<iostream>
using namespace std;
class solution
{
    int maxx;
int maxsum(struct Node *root)
{
if(root==NULL)
return(INT_MIN);
if(root->left==NULL&&root->right==NULL)
return root->data;
int k=maxsum(root->left);
int kk=maxsum(root->right);
if(k+kk+root->data >= maxx)
{
maxx=k+kk+root->data;
}
//cout<<maxx<<" "<<k<<"="" "<<kk<<"="" "<<root-="">data<<" ";
k=max(k,kk);
//cout<<k+root->data<<endl; return(k+root-="">data);
}
int maxPathSum(struct Node *root)
{
maxx=INT_MIN;
maxsum(root);
return maxx;
}
};
