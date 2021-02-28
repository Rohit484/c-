#include<iostream>
using namespace std;
void bubble_sort(vector<int> &B,int n)
{
    bool swapped=true;
    while(swapped)
    {
        swapped=false;
        for(int j=1;j<n;++j)
        {
            if(B[j]<B[j-1])
            {
                swap(B[j],B[j-1]);
                swapped=true;
            }
        }
        n--;
    }
}
