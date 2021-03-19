#include<iostream>
using namespace std;
template<class t>
void add(t a, t b)
{
    t c;
    c=a+b;
    cout<<"Sum is "<<c;
}
int main()
{
    int f,g;
cout<<"Enter the Firsr value ";
cin>>f;
cout<<"Enter the second value: ";
cin>>g;
 add(f,g);

}
