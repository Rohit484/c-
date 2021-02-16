#include<iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout<<"\nShow of base:";
    }
};
class child: public base
{
  public:
      void show()
      {
          base::show();
          cout<<"\n Show of child";
      }
};
int main()
{
    child c;
    c.show();
    c.base::show();

}
