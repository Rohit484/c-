//UNARY OPERATOR_OVERLOADING
#include<iostream>
using namespace std;
class counter
{
    int cnt;
public:
    counter()
    {
        cnt=0;
    }
    void show()
    {
        cout<<"\nCount is "<<cnt;
    }
    void operator ++()
    {
        cnt+=5;
    }
    void operator --()
    {
        cnt-=3;
    }


};
int main()
{
    counter c1,c2;
    c1.show();
    c2.show();
    ++c1;
    ++c2;
    c1.show();
    c2.show();
    --c1;
    --c2;
    c1.show();
    c2.show();

}
