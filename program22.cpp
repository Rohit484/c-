#include<iostream.
using namespace std;
Node* insert(Node* root,int key)
{
    Node* p=root;
    while(l)
    {
        if(p->data==key)
            return root;
        else if(p->data>key)
        {
            if(!p->left)
            {
                p->left=new Node(key);
                return root;
            }
            p=p->left;
        }
        else
        {
            if(!p->right)
            {
                p->right=new Node(key);
                return root;
            }
            p=p->right;
        }
    }
}
