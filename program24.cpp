#include<iostream>
using namespace std;
ool com(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;
}

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {

        vector<pair<int,int>>v;

        for(int i=0; i<N; i++)
            v.push_back(make_pair(A[i],B[i]));

        sort(v.begin(),v.end(),com);

        int sum=0;
        auto it=v.begin();
        while(it!=v.end() && T>0)
        {
            if(T>=(*it).first)
            {
                sum+=(*it).first*(*it).second;
                T-=(*it).first;
            }
            else
            {
                sum+=(T*(*it).second);
                T=0;
            }
            it++;
        }

        return sum;
    }
};
