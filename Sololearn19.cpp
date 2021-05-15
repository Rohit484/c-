#include<iostream>
using namespace std;
int main()
class Solution
{
    struct TrieNode
    {
        TrieNode *child[26];
        bool isEnd;

        TrieNode()
        {
            for(int i = 0; i < 26; i++)
            {
                child[i] = NULL;
            }

            isEnd = false;
        }
    };

    void insertWord(TrieNode *root, string word)
    {
        TrieNode *curr = root;

        for(int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a';

            if(curr->child[index] == NULL)
            {
                curr->child[index] = new TrieNode();
            }

            curr = curr->child[index];
        }

        curr->isEnd = true;
    }

    void insertWords(TrieNode *root, vector<string> &words)
    {
        for(int i = 0; i < words.size(); i++)
        {
            insertWord(root, words[i]);
        }
    }

    bool searchWords(TrieNode *root, string word)
    {
        TrieNode *curr = root;

        for(int i = 0; i < word.size(); i++)
        {
            if(curr->isEnd == true)
            {
                curr = root;
            }

            int index = word[i] - 'a';

            if(curr->child[index] == NULL)
            {
                return 0;
            }

            curr = curr->child[index];
        }

        return 1;
    }

    public:
    int wordBreak(string A, vector<string> &B)
    {
        TrieNode *root = new TrieNode();

        insertWords(root, B);

        return searchWords(root, A);
    }
};
