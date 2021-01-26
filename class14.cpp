#include<iostream>
using namespace std;
class school
{
    int regno,nos,nof;
public:
    void input();
    void output();
    void cheak();
    void display();


};
void school::input()
{
    cout<<"Reg No";
    cin>>regno;
    cout<<"Number of student:- ";
    cin>>nos;
    cout<<"Number of Facaltiyes:- ";
    cin>>nof;
}
void school:: output()
{
    cout<<"RegNo"<<regno<<endl;
    cout<<"Number of student:-"<<nos<<endl;
    cout<<"Number of facalties:-"<<nof<<endl;
}
int main()
{
    school myschool;
    myschool.input();
    myschool.output();
}
