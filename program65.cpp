#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class Solution
{
    public:
    //Function to return a list of integers denoting the node
    //values of both the BST in a sorted order.
    void inorder (Node* r, vector<int> &ans){

if (r == nullptr)
return;

inorder (r->left, ans);
ans.push_back(r->data);
inorder (r->right, ans);
}
// Return a integer of integers having all the nodes in both the BSTs in a sorted order.
vector<int> merge(Node *root1, Node *root2)
{
//Your code here
vector<int> v1, v2, res;
inorder (root1, v1);
inorder (root2, v2);

int n = v1.size();
int m = v2.size();

int i = 0, j = 0;
while (i < n && j < m){
if (v1[i] < v2[j]){
res.push_back(v1[i]);
i++;
}
else{
res.push_back(v2[j]);
j++;
}
}

for (int id = i; id < n; ++id){
res.push_back(v1[id]);
}

for (int id = j; id < m; ++id){
res.push_back(v2[id]);
}



return res;
}
};

