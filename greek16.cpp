#include<iostream>
using namespace std;

   class Solution{
    public:
    int candies(int m, int n)
    {
    	int x = (m*n)-(m+n);
         return x/2 + 1;
    }
};
