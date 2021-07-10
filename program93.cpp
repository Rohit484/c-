#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<auto> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector<int> constructRectangle(int area) {
      for (int i = sqrt(area); i > 0; i--) {
         if (area % i == 0) {
            vector<int> v{ area / i, i };
            return v;
         }
      }
      return { -1, -1 };
   }
};
main(){
   Solution ob;
   print_vector(ob.constructRectangle(4));
}
