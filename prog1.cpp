#include<iostream>
using namespace std;
class T4TUTORIALS
{
 private:
 int n1,n2,i,gcd;
 public:
 void in()
 {
    cout<<"Please Enter two integer values:";
    cin>>n1>>n2;
 }
 void calc()
 {
 for(i=1;i<=n1&&i<=n2;i++)
 {
 if(n1%i==0&&n2%i==0)
 gcd=i;
 }
 }
 friend int disp(T4TUTORIALS);
};
  int disp(T4TUTORIALS obj)
 {
 cout<<"GCD  is "<<obj.gcd;
 }
int main()
{
 T4TUTORIALS obj;
 obj.in();
 obj.calc();
 disp(obj);
}
