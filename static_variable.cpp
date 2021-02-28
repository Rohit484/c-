#include<iostream>
using namespace std;
class student
{
    int rollno,marks;
    static int cnt;
public:
    student(int no,int m)
    {
        rollno=no;
        marks=m;
        cnt++;
    }
    void show()
    {
        cout<<"\n Roll No is "<<rollno;
        cout<<"\n Marks is "<<marks;
        cout<<"\n Count value is "<<cnt;
    }
};
int student::cnt=0;
int main()
{
    student s1(101,78),s2(102,90),s3(103,99);
    s1.show();
    s2.show();
    s3.show();
}
