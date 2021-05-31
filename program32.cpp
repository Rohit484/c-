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
