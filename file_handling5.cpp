#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("products.txt");
    int pno,price,qty,total,dis;
    for(int i=1;i<=4;i++)
    {
        cout<<"\n Product no ";
        cin>>pno;
        cout<<"\nPrice ";
        cin>>price;
       int  dis=price*2/100;
        total=price-dis;
        file<<pno<<"\n"<<price<<"\n"<<dis<<"\n"<<total;
        cout<<"\n Product Information Saved! ";
    }
    file.close();
    ifstream in("products.txt");
    in>>pno>>price>>dis>>total;
    while(in)
    {
        cout<<"\n Product No "<<pno;
        cout<<"\nPrice "<<price;
        cout<<"\n Discount "<<dis;
        in>>pno>>price>>dis>>total;
    }
    in.close();
}
