#include<iostream>
using namespace std;
class product
{
    int price,weight;
public:
    product(int p)
    {
        price=p;

    }
    int  operator + (product p)
    {
        int total=price+p.price;
        return total;
    }
};
int main()
{
    int sum;
    product p1(100),p2(200);
    sum=p1+p2;
    cout<<"\n Total price "<<sum;

}

