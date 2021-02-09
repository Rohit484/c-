#include<iostream>
using namespace std;
class solution
{
public:
    int repeatedStringMatch(string A, string B)
{
int ans = 1;
string C = A;
while(1){
if(ans == 20){
return -1;
}
if(A.find(B) != string::npos){
return ans;
}else{
A = A+C;
ans += 1;
}
}
// Your code goes here
}
};

