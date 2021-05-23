#include <bits/stdc++.h>
using namespace std;
void swap(char& x, char& y)
{
	char temp = x;
	x = y;
	y= temp;
}
bool IsLexicographicallySmaller(
	int K, string S)
{
	if (K < S) {
		return true;
	}
	string temp =K ;
	sort(temp.begin(), temp.end());

	int index = -1;

	for (int i = 0; i < K.length(); i++) {
		if (K[i] != temp[i]) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		return false;
	}

	int j;
	for (int i = 0; i < K.length(); i++) {
		if (K[i] == temp[index])
			j = i;
	}
	swap(K[index], K[j]);
	if (K < S) {
		return true;
	}

	else {
		return false;
	}
}
int main()
{
	int K = "AGAIN";
	string S = "ACTION";

	if (IsLexicographicallySmaller(K, S)) {
		cout << "Yes"
			<< "\n";
	}
	else {
		cout << "No"
			<< "\n";
	}

	return 0;
}


