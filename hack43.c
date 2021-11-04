#include<stdio.h>
void com(int a,int b,int c,int d)
{
    if(a>=b && a>=c && a>=d)
      printf("%d",a);
    else if(b>=a && b>=c && b>=d)
        printf("\n%d",b);
    else if(c>=a && c>=b && c>=d)
        printf("\n%d",c);
    else if(d>=a && d>=b && d>=c)
        printf("\n%d",d);
    //printf("\n Your Total sum is %d",s);

}
int main()
{
    int x,y,z,i;
    //printf("\n Enter your values: ");
    scanf("%d%d%d%d",&x,&y,&z,&i);
    com(x,y,z,i);
}
