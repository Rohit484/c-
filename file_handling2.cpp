#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("demo2.txt");
    int rollno;
    char name[34];
    cout<<"\n Roll No ";
    cin>>rollno;
    cout<<"\n Name ";
    cin>>name;
    file<<rollno<<"\n "<<name;
    file<<"Hello Here your data ";
    file.close();
    cout<<"\n File succesfully saved ";
}
