#include<iostream>
using namespace std;
class book
{
    int bookno;
    char bookname[20];
    static int cnt;
public:
    book()
    {
        cout<<"Book no ";
        cin>>bookno;
        cout<<"Book Name ";
        cin>>bookname;
        cnt++;
    }
    void show()
    {
        cout<<"\n Book no "<<bookno;
        cout<<"\n Book Name "<<bookname;
    }
   static void showcnt()
    {
        cout<<"\n Total count is "<<cnt;
    }
};
int book::cnt=0;
int main()
{
    book b1,b2,b3;
    b1.show();
    b2.show();
    book::showcnt();
}
