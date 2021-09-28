#include<iostream>
using namespace std;
class Solution
{
    void sortedStack(stack<int> &s, int val) {
    if(s.size() == 0 or val >= s.top()) {
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    sortedStack(s, val);
    s.push(x);
}

void sort_my_stack(stack<int> &s) {
    if(s.size() == 0)
        return;
    int val = s.top();
    s.pop();
    sort_my_stack(s);
    sortedStack(s, val);
}

void SortedStack :: sort()
{
   sort_my_stack(s);
}
};
