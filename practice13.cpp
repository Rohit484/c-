#include<iostream>
using namespace std;
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

       vector<long long int> product;
       long long int p=1;
       for(int i=0;i<n;i++)
       {
           p=1;
           for(int j=0;j<n;j++)
           {
               if(i!=j)
               {
                   p*=nums[j];
               }
           }
           product.push_back(p);
       }
       return product;
    }
};
