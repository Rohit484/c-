#include<iostream>
using namespace std;
class Solution{
public:
	int search(string pat, string s) {
    // code here
    //fixed window sliding
    int k =pat.length(),ans=0;
    unordered_map<char,int>mp;
    for(int i=0;i<k;i++){
        mp[pat[i]]++;
    }
    int count=mp.size();
    for(int i=0;i<k;i++){
        if(mp.find(s[i])!=mp.end()){
            mp[s[i]]--;
            if(mp[s[i]]==0)count--;
        }
    }
    if(count==0)ans++;
    for(int i=k;i<s.length();i++){
        if(mp.find(s[i-k])!=mp.end()){
            if(mp[s[i-k]]==0)count++;
            mp[s[i-k]]++;
        }

        if(mp.find(s[i])!=mp.end()){
            mp[s[i]]--;
            if(mp[s[i]]==0)count--;
            if(count==0)ans++;
        }
    }
    return ans;
}
};
