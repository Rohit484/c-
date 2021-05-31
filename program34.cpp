
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void fun()
{
    ll n,m,x,y,z,i,j,k,l=0,sum=0,ans=0;
    cin >> n >> k;
    vector<ll> a(1,0);
    set<ll> st1,st2;
    for(i=1;i<=k;i++)
    {
        cin>>x>>y;
        st1.insert(x);
        st2.insert(y);
        sum = n*n - st1.size()*n - st2.size()*n + st1.size()*st2.size();
        cout<<sum<<"\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = 1;
    // cin >> n;
    while(n--)
    {
        fun();
    }
    return 0;
}
