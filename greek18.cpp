#include<iostream>
using namespace std;
class Solution
{
    int ans;

    int post(Node* node)
    {
        bool zero = false , two = false;
        if(node->left==NULL && node->right==NULL)
            return 0;

        if(node->left)
        {
            int get = post(node->left);
            if(get==0)
                zero = true;
            if(get==2)
                two = true;
        }

        if(node->right)
        {
            int get = post(node->right);
            if(get==0)
                zero = true;
            if(get==2)
                two = true;
        }

        if(zero==true)
        {
            ans++;
            return 2;
        }

        if(two==true)
        {
            return 1;
        }
        return 0;
    }
public:
    int supplyVaccine(Node* root)
    {
        ans = 0;
        int result = post(root);
        if(result == 0)
            return (ans + 1);
        return ans;
    }
};
