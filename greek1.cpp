// Back-end complete function Template for C++

class Solution {
  public:
    void prank(long long a[], int n){

        long long N = n;
        for(int i = 0;i<n;i++){
            a[i] = a[i] + (a[a[i]]%N) * N;
        }

        for(int i = 0;i<n;i++)
            a[i] = a[i]/N;
    }
};
