#include <bits/stdc++.h>

using namespace std;

int optimalPartition(int k,vector<int> a){
    sort(a.begin(),a.end());
    long long int i=0,l=0,s,j=a.size()-1;

    while(i<=j)
    {
        s=a[j];
        while(i<j and s+a[i]<=k)
        {
            i++;
        }
        l++;
        j--;
    }
    return l;

}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> a(n);
    for(int j = 0;j < n;j++){
        cin>>a[j];
    }
    int result;
    result = optimalPartition(k,a);
    cout<<result;
    return 0;
}
