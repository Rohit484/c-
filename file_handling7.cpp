#include<iostream>
#include<fstream>
using namespace std;
class student
{
    int rollno;
    char name[25];
public:
    void getstudent()
    {
        cout<<"\n Roll No: ";
        cin>>rollno;
        cout<<"\n Name: ";
        cin>>name;

    }
    void showstudent()
    {
       cout<<"\n Roll No "<<rollno;
       cout<<"\n Name "<<name;
    }
};
int main()
{
    ofstream of("stulist");
    student s;
    s.getstudent();
    of.write((char *)&s,sizeof(student));
    cout<<"\n Data Saved ";
    of.close();
    ifstream in("stulist");
    in.read((char *)&s,sizeof(student));
    s.showstudent();
    in.close();

}
