#include<bits/stdc++.h>
using namespace std;

int solve (int N, vector<int> A) {
   long long int i,k=0,s=0,l=0;

   bool ok=true;

   for(i=0;i<N;i++)
   {
       s+=A[i];
       if(A[i]<0)
       {
           ok=false;
           k++;
       }
   }

   if(ok)   //  ALL POSITIVE ELEMENTS
   {
       sort(A.begin(),A.end());
       return s-A[0];
   }

   if(k==N)     // ALL NEGATIVE ELEMENTS
   {
       sort(A.begin(),A.end());
       l=A[N-1];
       return l-s;
   }

   s=0;

	for(i=0;i<N;i++)
   {
       if(A[i]<0)
       {
           l+=A[i];
       }
       else
       s+=A[i];
   }
   return s-l;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(N, A);
        cout << out_;
        cout << "\n";
    }
}


GET MINIMUM ->


#include<bits/stdc++.h>
using namespace std;

int solve (int N, int S, int K, vector<int> Arr) {
   // Write your code here
   int s=0;

   for(auto x:Arr)
   s+=x;

   if(s==S)
   return 0;

   int d=S-s;

   d=abs(d);

   if(d%K==0)
   return d/K;

   return (d/K)+1;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int S;
        cin >> S;
        int K;
        cin >> K;
        vector<int> Arr(N);
        for(int i_Arr = 0; i_Arr < N; i_Arr++)
        {
        	cin >> Arr[i_Arr];
        }

        int out_;
        out_ = solve(N, S, K, Arr);
        cout << out_;
        cout << "\n";
    }
}


SIMPLE STRING ->


#include<bits/stdc++.h>
using namespace std;

int solve (int N, int K, string S) {
   // Type your code
   int i,l=0;

   for(i=1;i<N;i++)
   {
       if(S[i]!=S[i-1])
       {
           l=1;
           break;
       }
   }

   if(l==1)
   {
       if(K>=N)
       return 1;

    return N-K;
   }


   return N;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int K;
        cin >> K;
        string S;
        cin >> S;

        int out_;
        out_ = solve(N, K, S);
        cout << out_;
        cout << "\n";
    }
}


WEIGHTED ARRAY SUBSET DIVISION ->


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



CELLS IN A MATRIX ->


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


