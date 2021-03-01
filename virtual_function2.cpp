#include<iostream>
using namespace std;
class base
{
public:
   virtual void show()
    {
        cout<<"\n show of base ";
    }
};
class child1 : public base
{
public:
    void show()
    {
        cout<<"\n Show of child1 ";
    }
};
class child2 : public base
{
public:
    void show()
    {
        cout<<"\n Show of child2 ";
    }
};
int main()
{
  base *b;
  b=new base();
  b->show();
  b=new child1();
  b->show();
  b=new child2();
  b->show();

}
