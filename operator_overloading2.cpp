#include<iostream>
using namespace std;
class parcel
{
    int weight;
public:
    parcel(int w)
    {
        weight=w;
    }
    void display()
    {
        cout<<"\n Weight of the parcel is "<<weight;
    }
    void operator >(parcel p)
    {
        if(weight>p.weight)
            cout<<"\n First parcel is heavier ";
        else
            cout<<"\n Second parcel is heavier ";
    }
};
int main()
{
    parcel p1(10),p2(14);
    p1.display();
    p2.display();
    p1>p2;
}
