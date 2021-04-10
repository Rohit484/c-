#include <iostream>
using namespace std;
int main()
{
int passengers;
cout << "Please enter passenger's number, Output:- ";
cin >> passengers ;
int left_passengers= passengers % 50;
if(left_passengers == 0){
cout << "0 seats left";
}
else{
int left_seats= 50 - left_passengers;
cout << left_seats;
cout << " seats left";
}
}
