#include<iostream>
using namespace std;
class student
{
    int rollno,marks;
    int cnt;
public:
    student(int no,int m)
    {
        rollno=no;
        marks=m;
        cnt=0;
    }
    void show()
    {
        cout<<"\n Roll No is "<<rollno;
        cout<<"\n Marks is "<<marks;
        cout<<"\n Count value is "<<cnt;
    }
    void add()
    {
        cnt++:
    }
};
//int student::cnt=5;
int main()
{
    student s1(101,78),s2(102,90);
    s1.add();
    s1.show();
    s2.add();
    s2.show();
}
