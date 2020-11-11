#include <iostream>
#include <string>

using namespace std;

int reverse(int number); // reverses the number's digits

int main() {

	int x = 18475;

	cout << "18475 reversed is " << reverse(18475) << endl;
}

int reverse(int number) {

	int result = 0;

	while (number > 0) {
		result = result * 10 + number % 10;
		number /= 10;
	}

	return result;

}

