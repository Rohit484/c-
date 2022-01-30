#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
vector<ll> pows;


ll k_xor(ll a, ll b, ll k) {
    deque <ll> a_k, b_k;
    while (a > 0) {
        a_k.push_back(a % k);
        a /= k;
    }
    while (b > 0) {
        b_k.push_back(b % k);
        b /= k;
    }
    deque <ll> res_k;
    for (int i = 0; i < max(a_k.size(), b_k.size()); i ++) {
        ll tmp_a = (i < a_k.size()) ? a_k[i] : 0;
        ll tmp_b = (i < b_k.size()) ? b_k[i] : 0;
        res_k.push_back((tmp_a + tmp_b) % k);
    }
    ll res = 0;
    for (ll i = 0; i < res_k.size(); i ++) {
        res += (pows[i] * res_k[i]);
    }
    return res;
}


void solve(ll n, ll k) {
    pows[0] = 1;
    for (int i = 1; i < 21; i ++) {
        pows[i] = pows[i - 1] * k;
    }
    long long cur_mask = 0;
    for (long long i = 0; i < n; i ++) {
        ll tmp = k_xor(i, cur_mask, k);
        cout << tmp << endl;
        int r;
        cin >> r;
        if (r == 1) return;
        else cur_mask = k_xor(cur_mask, tmp, k);
    }
}


int main() {
    pows.resize(21);
    int t = 1;
    cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        solve(n, k);
    }
}
