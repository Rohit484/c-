#include<iostream>
using namespace std;
int main()
{
    void bDLL(Node* root, Node* &head, Node* &prev)
{
if(!root)
return;
bDLL(root->left,head,prev);
root->left = prev;
if(!prev)
head = root;
else{
prev->right = root;
}
prev = root;
bDLL(root->right,head,prev);
}
// This function should return head to the DLL
Node * bToDLL(Node *root)
{ Node* head = NULL;
Node* prev=NULL;
bDLL(root,head,prev);
return head;
}
}
