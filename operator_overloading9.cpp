#include<iostream>
using namespace std;
class product
{
    int price;
public:
    product(int p)
    {
        price=p;
    }
    void operator + (product p)
    {
        int total=price+p.price;
        cout<<"\n Total price is "<<total;
    }
};
int main()
{
    product p1(100),p2(200);
    p1+p2;
}
