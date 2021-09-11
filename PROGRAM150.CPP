#include<iostream>
using namespace std;
class Solution
{
    int maxArea(int M[MAX][MAX], int n, int m) {
    // Your code here
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(M[i][j]!=0)
        M[i][j]+=M[i-1][j];
    }
    int max_area=0,tp,max_row_area=0;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int j=0,r_area;
        while(j<m)
        {
            if(s.empty()||M[i][s.top()]<=M[i][j])
            s.push(j++);
            else
            {
                int temp=s.top();
                s.pop();
                r_area= M[i][temp]*(s.empty() ? j : j-s.top()-1 );

                if(max_row_area<r_area)
                max_row_area=r_area;
            }
        }
        while(!s.empty())
        {
            int temp=s.top();
            s.pop();
            r_area= M[i][temp]*(s.empty() ? j : j-s.top()-1 );

            if(max_row_area<r_area)
            max_row_area=r_area;
        }
        if(max_area<max_row_area)
        max_area=max_row_area;
    }
    return max_area;
}
};
