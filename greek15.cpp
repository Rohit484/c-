#include<iostream>
using namespace std;
class Solution
{
public:
    bool recreationalSpot(int arr[],int n)
    {
        int currMin,currMax;
        currMin=currMax=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<currMin)
            {
                currMin=arr[i];
            }
            else if(arr[i]>currMax)
            {
                currMax=arr[i];
            }
            if(arr[i]<currMax && arr[i]>currMin)
            {
                return true;
            }
        }
        return false;
    }
};
