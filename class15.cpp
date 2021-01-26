#include<iostream>
using namespace std;
class circle
{
    float radius;
public:
    circle(float r)
    {
        radius=r;
    }
    void show()
    {
        cout<<"\nRadius "<<radius;
    }
    float area()
    {
        float ar=3.14*radius*radius;
       return(ar);
    }
};
int main()
{
    circle c1(2.5);
    float a;
    c1.show();
    a=c1.area();
    cout<<"\nArea of circle is "<<a;
}
