#include <stdio.h>
int main()
{
  int n, c = 1;

  scanf("%d", &n);   // It is assumed that n >= 1

  print:  // label

  printf("%d\n", c);
  c++;

  if (c <= n)
    goto print;

  return 0;
}
