#include<iostream>
using namespace std;
class product
{
    int price,weight;
public:
    product()
    {

    }
    product(int p)
    {
        price=p;

    }
    product  operator + (product p)
    {
        product temp;
        temp.price=price+p.price;
        return temp;
    }
    void show()
    {
        cout<<"\nValue is "<<price;
    }
};
int main()
{
    int sum;
    product p1(100),p2(200),p3(300),p4;
    p4=p1+p2+p3;
    p4.show();

}

