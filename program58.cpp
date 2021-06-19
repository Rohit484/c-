#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int numRescueBoats(vector<int>& people, int limit) {
      sort(people.begin(), people.end());
      int i = 0;
      int j = people.size() - 1;
      int ret = 0;
      while(i <= j){
         if(people[i] + people[j] <= limit){
               i++, j--;
         }else{
            j--;
         }
         ret++;
      }
      return ret;
   }
};
main(){
   vector<int> v = {3,2,1,2};
   Solution ob;
   cout << (ob.numRescueBoats(v, 3));
}
