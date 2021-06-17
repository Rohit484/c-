#include<iostream>
using namespace std;
class solution{
int height(Node * p)
{
if(p)
{
int left=height(p->left);
int right=height(p->right);

if(left>right)
return left+1;
else return right+1;

}
return 0;
}

/* Computes the diameter of binary tree with given root. */
int diameter(Node* root) {

if(root==NULL)
return 0;

int leftsubtree=height(root->left);
int rightsubtree=height(root->right);

int leftdiameter=diameter(root->left);
int rightdiameter=diameter(root->right);


int fd=max(leftsubtree+rightsubtree+1,max(leftdiameter,rightdiameter));

return fd;

}
};
