#include<stdio.h>
struct student
{
    int Rollno;
    char name[10];

};
void main()
{
    struct student s1,s2;
    printf("\n Enter your roll no ");
    scanf("%d",&s1.Rollno);
    printf("\n Enter your name ");
    scanf("%s",s1.name);
    printf("\n Enter your roll no ");
    scanf("%d",&s2.Rollno);
    printf("\n Enter your name ");
    scanf("%s",&s2.name);
    printf("\n your roll number  is %d",s1.Rollno);
    printf("\n name is %s",s1.name);
    printf("\n roll number is %d",s2.Rollno);
    printf("\n name is %s",s2.name);
}
