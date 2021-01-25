#include<iostream>
using namespace std;
class box
{
    int length,beadth,height;
public:
    box()
    {
        length=12;
        beadth=13;
        height=14;
    }
    box(int l,int b,int h)
    {
        length=l;
        beadth=b;
        height=h;
    }
    void display()
    {
        cout<<"Length;-"<<length<<endl;
        cout<<"Beadth:-"<<beadth<<endl;
        cout<<"Height:-"<<height<<endl;
    }
    void volume()
    {
        int v = length*beadth*height;
        cout<<"Volume is:-"<<v;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the Breadth";
    cin>>a;
    cout<<"Enter the height";
    cin>>b;
    cout<<"Enter the lenght";
    cin>>c;
   box toybox(a,b,c);
   toybox.display();
   toybox.volume();
   box tvbox(3,4,5);
   tvbox.display();
   tvbox.volume();
   box tackbox(2,6,9);
   tackbox.display();
   tackbox.volume();

   box b2;
   b2.display();
   b2.volume();

}
