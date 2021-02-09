#include<iostream>
using namespace std;
int countTriplets(struct Node* head, int x) {
vector<int> arr;
Node* temp = head;
while (temp != NULL) {
arr.push_back(temp->data);
temp = temp->next;
}

int cnt = 0;

for (int i = 1; i < arr.size() - 1; i++) {
int l = 0, r = arr.size() - 1;
while (l < i && r > i) {
int mid = arr[l] + arr[i] + arr[r];
if (mid < x) {
l++;
} else if (mid == x) {
cnt++;
l++;
r--;
} else {
r--;
}
}
}

return cnt;
}
