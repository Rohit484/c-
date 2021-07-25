#include<iostream>
using namespace std;
class Solution
{
    void findDefect(Node *root, Node *&prev, Node *&first, Node *&second)
{
    if(root == NULL)
    {
        return;
    }

    findDefect(root->left, prev, first, second);

    if(prev != NULL && root->data < prev->data)
    {
        if(first == NULL)
        {
            first = prev;
        }
        second = root;
    }
    prev = root;

    findDefect(root->right, prev, first, second);

}

Node *correctBST(Node *root)
{
    Node *prev = NULL, *first = NULL, *second = NULL;

    findDefect(root, prev, first, second);

    swap(first->data, second->data);

    return root;
}
};
