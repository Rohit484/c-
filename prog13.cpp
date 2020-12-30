#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character:-";
    cin>>ch;
    if((ch=='A'||ch=='E' || ch=='I' || ch=='O' || ch=='U') || (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') )
    {
        cout<<"Your enter vowel character:-"<<ch<<endl;
    }
    else
        cout<<"ou enter consonant character:-"<<ch<<endl;
}
