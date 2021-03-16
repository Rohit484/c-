#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }

	void levelOrder(Node * root){
       std::queue<Node*> q;
        Node* c;

        if (root != NULL) {
            q.push(root);
        }

        while (!q.empty()) {
            c = q.front();
            q.pop();
            cout << c->data << " ";
            if (c->left!=NULL) q.push(c->left);
            if (c->right!=NULL) q.push(c->right);
        }

	}

};//End of Solution
