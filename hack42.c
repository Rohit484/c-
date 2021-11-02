#include<stdio.h>
#define max
int ma(int a,int b)
{
    int max(a,b);
    int sum;
    sum=max(a,b);
    printf("Here greater value is: %d",sum);
}
int main()
{
    int x,y;
    printf("\n Enter your values: ");
    scanf("%d%d",&x,&y);
    ma(x,y);
}

