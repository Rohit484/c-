#include <bits/stdc++.h>
using namespace std;
void swap(int& x, char& y)
{
	char temp = x;
	x = y;
	y= temp;
}
bool IsLexicographicallySmaller(
	int K, string S)
{
	if (A < B) {
		return true;
	}
	string temp = A;
	sort(temp.begin(), temp.end());

	int index = -1;

	for (int i = 0; i < A.length(); i++) {
		if (A[i] != temp[i]) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		return false;
	}

	int j;
	for (int i = 0; i < A.length(); i++) {
		if (A[i] == temp[index])
			j = i;
	}
	swap(A[index], A[j]);
	if (A < B) {
		return true;
	}

	else {
		return false;
	}
}
int main()
{
	string A = "AGAIN";
	string B = "ACTION";

	if (IsLexicographicallySmaller(A, B)) {
		cout << "Yes"
			<< "\n";
	}
	else {
		cout << "No"
			<< "\n";
	}

	return 0;
}

