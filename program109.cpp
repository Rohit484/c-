#include<iostream>
using namespace std;
class Solution
{
    vector<int> ans;
void trav(Node* nd,int flag)
{
if(nd==NULL) return;
if(nd->left==NULL && nd->right==NULL){ ans.push_back(nd->data); return; }
if(flag==0)
{
ans.push_back(nd->data);
trav(nd->left,1);
trav(nd->right,2);
}
else if(flag==1)
{
ans.push_back(nd->data);
int fl=3;
if(nd->left==NULL) fl=1;
trav(nd->left,1);
trav(nd->right,fl);
}
else if(flag==2)
{
int fl=3;
if(nd->right==NULL) fl=2;
trav(nd->left,fl);
trav(nd->right,2);
ans.push_back(nd->data);
}
else
{
trav(nd->left,3);
trav(nd->right,3);
}
return;
}
vector <int> printBoundary(Node *root)
{
ans.clear();
trav(root,0);
return ans;
}
};
