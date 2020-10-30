#include <iostream>
#include <stdlib.h>
#include <conio.h>
int main( )
{
static int t;

if(t==7)
{
cout<<"Quit\n ";
exit(0);
}
cout<<endl<<"Hello from main"<<++t;
return 0;
