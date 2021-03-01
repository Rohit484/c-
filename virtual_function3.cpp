#include<iostream>
using namespace std;
class set1
{
public:
   virtual void fun1()=0;//PURE VIRTUAL FUNCTION
   virtual void fun2(int a,int b)=0;
   virtual void fun3()=0;
   virtual int fun4(int a)=0;
};
class impl1 : public set1
{
public:
    void fun1()
    {

    }
    void fun2(int a,int b)
    {

    }
    void fun3()
    {

    }
    int fun4(int a)
    {

    }
    void method1()
    {

    }
};
int main()
{

    impl1 s2;
}
