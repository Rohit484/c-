#include<iostream>
#include<string>
using namespace std;
struct student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main()
{
    student st;
    cin>>st.age>>st.first_name>>st.last_name>>st.standard;
    cout<<st.age<<endl;
    cout<<st.first_name<<endl;
    cout<<st.last_name<<endl;
    cout<<st.standard<<endl;
}

