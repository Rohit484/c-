#include<iostream>
using namespace std;
class distanc
{
    int feet;
    float inches;
public:
    distance(int f, float i)
    {
        feet=f;
        inches=i;
    }
    void operator +(distanc d)
    {
        int tf=feet+d.feet;
        float ti=inches+d.inches;
        if(ti>=12)
        {
             tf++;
             ti-+12;
        }
        cout<<"\n Total Distance: ";
        cout<<"\n"<<tf<<"Feet, "<<ti<<" Inches: ";


    }
};
int main()
{
    distanc d1(15,9,5),d2(20,8.7);
    d1+d2;
}
