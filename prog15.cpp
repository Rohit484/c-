#include <iostream>
using namespace std;

int main() {
    int number;
    int sum=0 ;

    // take input from the user


    while (number < 100) {
        // add all positive numbers


        // take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    }

    // display the sum
    cout << "\nThe sum is " << sum << endl;


}
