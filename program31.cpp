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
