#include<iostream>
using namespace std;
class solution
{
    string rearrangeString(string s)
{
//code here
vector<int>v (26, 0);
for(char c : s){
if(++v[c - 'a'] > (s.length() + 1) / 2)
return "-1";
}
priority_queue<pair<int,char>>pq;
for(int i=0;i<26;i++)
if(v[i])
pq.push({v[i], i + 'a'});

string str;
pair<int,char>prev = pq.top();
pq.pop();
str = prev.second;
while(!pq.empty()){
pair<int,char>curr = pq.top();
pq.pop();
str += curr.second;
if(--prev.first > 0)
pq.push(prev);
prev = curr;
}
if(s.size() != str.size())
return "-1";

return str;
}
};
