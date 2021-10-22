#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:

    map<int,pair<int,int>> mp;
    void findtop(Node *root,int hl,int l){
        if(!root) return;
        findtop(root->left,hl-1,l+1);
        if(mp.find(hl)!=mp.end()){
            if(mp[hl].first>l){
                mp[hl]={l,root->data};
            }
        }else{
            mp[hl]={l,root->data};
        }

        findtop(root->right,hl+1,l+1);
    }
    vector<int> topView(Node *root)
    {
          mp.clear();
          vector<int> res;
          findtop(root,0,0);

            for(auto x:mp){
              res.push_back(x.second.second);
          }
          return res;
    }

};
