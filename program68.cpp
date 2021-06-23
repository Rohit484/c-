#include<iostream>
using namespace std;
class Solution {
public:

#define char_int(c) ((int)c - (int)'A')

// Alphabet size
#define SIZE (26)
    struct TrieNode {
    TrieNode* Child[SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool leaf;
};

// Returns new trie node (initialized to NULLs)
TrieNode* getNode()
{
    TrieNode* newNode = new TrieNode;
    newNode->leaf = false;
    for (int i = 0; i < SIZE; i++)
        newNode->Child[i] = NULL;
    return newNode;
}

// If not present, inserts a key into the trie
// If the key is a prefix of trie node, just
// marks leaf node
void insert(TrieNode* root, string Key)
{
    int n = Key.size();
    TrieNode* pChild = root;

    for (int i = 0; i < n; i++) {
        int index = char_int(Key[i]);

        if (pChild->Child[index] == NULL)
            pChild->Child[index] = getNode();

        pChild = pChild->Child[index];
    }

    // make last node as leaf node
    pChild->leaf = true;
}

// function to check that current location
// (i and j) is in matrix range
bool isSafe(int i, int j, vector<vector<bool>>& visited)
{
    int M = visited.size();
    int N = visited[0].size();
    return (i >= 0 && i < M && j >= 0 && j < N && !visited[i][j]);
}

// A recursive function to print all words present on boggle
void searchWord(TrieNode* root, vector<vector<char> >& boggle, int i,
                int j, vector<vector<bool>> &visited, string str,set<string>& fans)
{
    int M = boggle.size();
     int N = boggle[0].size();
    // if we found word in trie / dictionary
    if (root->leaf == true)
        fans.insert(str);

    // If both I and j in  range and we visited
    // that element of matrix first time
    if (isSafe(i, j, visited)) {
        // make it visited
        visited[i][j] = true;

        // traverse all childs of current root
        for (int K = 0; K < SIZE; K++) {
            if (root->Child[K] != NULL) {
                // current character
                char ch = (char)K + (char)'A';

                // Recursively search reaming character of word
                // in trie for all 8 adjacent cells of boggle[i][j]
                if (isSafe(i + 1, j + 1, visited)
                    && boggle[i + 1][j + 1] == ch)
                    searchWord(root->Child[K], boggle,
                               i + 1, j + 1, visited, str + ch,fans);
                if (isSafe(i, j + 1, visited)
                    && boggle[i][j + 1] == ch)
                    searchWord(root->Child[K], boggle,
                               i, j + 1, visited, str + ch,fans);
                if (isSafe(i - 1, j + 1, visited)
                    && boggle[i - 1][j + 1] == ch)
                    searchWord(root->Child[K], boggle,
                               i - 1, j + 1, visited, str + ch,fans);
                if (isSafe(i + 1, j, visited)
                    && boggle[i + 1][j] == ch)
                    searchWord(root->Child[K], boggle,
                               i + 1, j, visited, str + ch,fans);
                if (isSafe(i + 1, j - 1, visited)
                    && boggle[i + 1][j - 1] == ch)
                    searchWord(root->Child[K], boggle,
                               i + 1, j - 1, visited, str + ch,fans);
                if (isSafe(i, j - 1, visited)
                    && boggle[i][j - 1] == ch)
                    searchWord(root->Child[K], boggle,
                               i, j - 1, visited, str + ch,fans);
                if (isSafe(i - 1, j - 1, visited)
                    && boggle[i - 1][j - 1] == ch)
                    searchWord(root->Child[K], boggle,
                               i - 1, j - 1, visited, str + ch,fans);
                if (isSafe(i - 1, j, visited)
                    && boggle[i - 1][j] == ch)
                    searchWord(root->Child[K], boggle,
                               i - 1, j, visited, str + ch,fans);
            }
        }

        // make current element unvisited
        visited[i][j] = false;
    }
}

// Prints all words present in dictionary.
vector<string> findWords(vector<vector<char> >& boggle, TrieNode* root)
{
    // Mark all characters as not visited
     int M = boggle.size();
     int N = boggle[0].size();
    vector<vector<bool>> visited;
    for(int i=0;i<M;i++)
    { vector<bool> tmp;
        for(int j=0;j<N;j++)
        tmp.push_back(0);
        visited.push_back(tmp);
    }

    TrieNode* pChild = root;

    string str = "";
    set<string> ans;

    // traverse all matrix elements
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            // we start searching for word in dictionary
            // if we found a character which is child
            // of Trie root
            if (pChild->Child[char_int(boggle[i][j])]) {
                str = str + boggle[i][j];
                searchWord(pChild->Child[char_int(boggle[i][j])],
                           boggle, i, j, visited, str,ans);
                str = "";
            }
        }
    }
    vector<string> fans;
    for (auto el: ans)
        fans.push_back(el);
    return fans;
}
    vector<string> wordBoggle(vector<vector<char> >& words, vector<string>& dictionary) {
        // Code here
        TrieNode* root = getNode();
        for (int i = 0; i < dictionary.size(); i++)
        insert(root, dictionary[i]);
         return findWords(words, root);
    }
};
