#include<stdio.h>
void SUM(int a, int b)
{
    int c;
    c=a+b;
    printf("Here your total sum value is: %d",c);
}
void min(int x, int y)
{
    int min;
    min=x-y;
    printf("\nHere your total minus value is %d",min);
}
void mul(int i,int j)
{
    int mu=i*j;
    printf("\nHere your total values Is %d",mu);
}

int main()
{
  int m,n;
    printf("Enter your values: ");
    scanf("\n%d%d",&m,&n);
    SUM(m,n);
    min(m,n);
    mul(m,n);
}
