// CPP code to transform string
#include <bits/stdc++.h>
using namespace std;

// Function to change
// character's case
string change_case(string a)
{
	int l = a.length();

	for(int i = 0 ; i < l ; i++)
	{
		// If character is lowercase
		// change to uppercase
		if(a[i] >= 'a' && a[i] <= 'z')
			a[i] = (char)(65 +
				(int)(a[i] - 'a'));

		// If character is uppercase
		// change to lowercase
		else if(a[i] >= 'A' && a[i] <= 'Z')
			a[i] = (char)(97 +
				(int)(a[i] - 'A'));
	}

	return a;

}

// Function to delete vowels
string delete_vowels(string a)
{
	string temp = "";
	int l = a.length();
	for(int i = 0 ; i < l ; i++)
	{
		//If character is consonant
		if(a[i] != 'a' && a[i] != 'e' &&
		a[i] != 'i' && a[i] != 'o' &&
		a[i] != 'u' && a[i] != 'A' &&
		a[i] != 'E' && a[i] != 'O' &&
		a[i] != 'U'&& a[i] != 'I')
			temp += a[i];
	}

	return temp;

}

// Function to insert "#"
string insert_hash(string a)
{
	string temp = "";
	int l = a.length();

	for(int i = 0 ; i < l ; i++)
	{
		// If character is not special
		if((a[i] >= 'a' && a[i] <= 'z') ||
		(a[i] >= 'A' && a[i] <= 'Z'))
			temp = temp + '#' + a[i];
		else
			temp = temp + a[i];
	}

	return temp;

}

// Function to transform string
void transformSting(string a)
{
	string b = delete_vowels(a);
	string c = change_case(b);
	string d = insert_hash(c);

	cout << d;
}

// Driver function
int main()
{
	string a = "SunshinE!!";

	// Calling function
	transformSting(a);

	return 0;
}

