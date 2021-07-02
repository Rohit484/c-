#include<iostream>
using namespace std;
class Solution{
    public:
    string fractionToDecimal(int n, int d) {
        // Code here
        unordered_map<int,int>m;
        int q= n/d;
        string ans=to_string(q);
        int r=0;
        if(n%d==0)
        {
            return ans;
        }
        else
        {
            ans+='.';
            r=n%d;
            while(r!=0)
            {
                if(m.find(r)!=m.end())
                {
                    int l=m[r];
                    ans.insert(l,"(");
                    ans+=")";
                    break;
                }
                else
                {
                    m[r]=ans.length();
                    r*=10;
                    q=r/d;
                    r=r%d;
                    ans = ans+to_string(q);
                }

            }
        }

        return ans;
    }
};
