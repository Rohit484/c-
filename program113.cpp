#include<iostream>
using namespace std;
class Solution
{
public:
int isCircle(int N, vector<string> A)
{

unordered_map<char,int> m;
unordered_map<char,int> m1;
//m1 for finding the words which have same letters at the start and //end
unordered_map<char,int> m2;
int n = A.size();
for(int i = 0 ; i < n ;i++){
m[A[i][0]]++;
if(A[i][0] == A[i][A[i].size()-1]){
m1[A[i][0]]++;
}
m2[A[i][A[i].size()-1]]++;
}
for(int i = 0 ; i < n ;i++){
if(m[A[i][0]] != m2[A[i][0]]){
return 0;
}
if(m[A[i][0]] == m1[A[i][0]]){
if(n != m[A[i][0]])
return 0;
return 1;
}
}
return 1;
}
};
