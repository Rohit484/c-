#include <iostream>
using namespace std;
class Demo
{
    int num =10;
    friend class Test; //Declaration friend class.
};
class Test
{
  public:
    void show(Demo &a)
    {
        cout<<"value of Num is : "<<a.num;
    }
};
int main()
{
    Demo a;
    Test b;
    b.show(a);
    return 0;
}
