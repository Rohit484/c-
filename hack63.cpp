#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool end_with(string& s) {
    string t = "@gmail.com";
    if (s.size() < t.size()) return false;
    for (int i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0; --i, --j) {
        if (s[i] != t[j]) return false;
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    vector<string> ans;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (end_with(emailID))
            ans.push_back(firstName);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i)
        cout << ans[i] << endl;
    return 0;
}
