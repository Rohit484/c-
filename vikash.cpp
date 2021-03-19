#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    char ch[15];
    void fn()
    {
      cout<<"\n enter your name";
     cin>>ch;
     cout<<"\n enter your roll no";
     cin>>rollno;

    }
    void show()
    {
        cout<<"\n your name is "<<ch;
        cout<<"\n your roll no "<<rollno;
    }

};
int main()
{
    student c;
    c.fn();
    c.show();
}

