#include<iostream>
using namespace std;
class base
{
public:
    void show(double b)
    {
        cout<<"\nShow of base:"<<b;
    }
};
class child: public base
{
  public:
      void show(float b)
      {
          //base::show();
          cout<<"\n Show of child: "<<b;
      }
};
int main()
{
    int a=50;
    float b=5.2;
    child c;
    c.show(50);
   c.show(5.5);

}
