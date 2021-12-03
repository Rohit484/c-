#include<iostream>
using namespace std;
void insert(struct TrieNode *root, string key)
{
    // code here
    int n = key.size();
    for(int i=0; i<n; i++){
        if(root->children[key[i]-'a'] == nullptr){
            root->children[key[i]-'a'] = getNode();
            root = root->children[key[i]-'a'];
        }
        else{
            root = root->children[key[i]-'a'];
        }
    }
    root->isLeaf = true;

}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key)
{
    // code here
    int n = key.size();
    for(int i=0; i<n; i++){
        if(root->children[key[i]-'a'] == nullptr){
            return false;
        }
        else{
            root = root->children[key[i]-'a'];
        }
    }
    return (root->isLeaf);
}
