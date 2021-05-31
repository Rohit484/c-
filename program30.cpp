
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
