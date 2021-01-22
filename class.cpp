#include<iostream>
using namespace std;
class student
{
    public:

    int rollno;
    char name[10];
};
int main()
{
    student s1 ,s2,s3;
    cout<<"Roll No:-";
    cin>>s1.rollno;
    cout<<"Name"<<endl;
    cin>>s1.name;
    cout<<"Roll No:-"<<s1.rollno<<endl;
    cout<<"Name:- "<<s1.name<<endl;
    cout<<"Roll No:-";
    cin>>s2.rollno;
    cout<<"Name"<<endl;
    cin>>s2.name;
    cout<<"Roll No:-"<<s2.rollno<<endl;
    cout<<"Name:- "<<s2.name<<endl;
     cout<<"Roll No:-";
    cin>>s3.rollno;
    cout<<"Name"<<endl;
    cin>>s3.name;
    cout<<"Roll No:-"<<s3.rollno<<endl;
    cout<<"Name:- "<<s3.name<<endl;

}
