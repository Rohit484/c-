#include<iostream>
using namespace std;
class Solution{
public:
int min_sprinklers(int gallery[], int n)
{
vector<vector<int>> sprinklers;
for(int i = 0; i < n;i++){
if(gallery[i] > -1){
sprinklers.push_back({i-gallery[i],i+gallery[i]});
}
}

sort(sprinklers.begin(),sprinklers.end());

int j = 0,target = 0;
int sprinklers_on = 0;
while(target < n){
if(j == sprinklers.size() || sprinklers[j][0] > target){
return -1;
}
int max_range = sprinklers[j][1];
while(j + 1 < sprinklers.size() && sprinklers[j+1][0] <= target){
j += 1;
max_range = max(max_range,sprinklers[j][1]);
}
if(max_range < target){
return -1;
}
sprinklers_on++;
target = max_range + 1;
j++;
}
return sprinklers_on;
}
};
