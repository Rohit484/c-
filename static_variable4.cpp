#include <iostream>
int xGlobal = 7;

struct Foo
{
  int xMember;

  static int xStatic;

  Foo(int x) : xMember(x) {}

  int a(int x = xGlobal)
  {
    return x;
  }

  /*//int b(int x = xMember) // wrong: won't compile
  {
    return x;
  }*/

  int c(int x = xStatic)
  {
    return x;
  }
};

int Foo::xStatic = 1;

int main()
{
  Foo f(911);

  std::cout << f.a() << std::endl;
  std::cout << f.b() << std::endl;
  std::cout << f.c() << std::endl;

  return 0;
}
