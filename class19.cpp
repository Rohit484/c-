#include<iostream>
using namespace std;
class AddAmmount
{
    int no,ad;
public:
    void mini()
    {
        no=50;
        cout<<"\n Your Minimum Bank Balance is:-"<<no;
    }
    void add()
    {
        cout<<"\n Enter the Ammont For add to bank Balance Sheet:-";
        cin>>ad;
        no+=ad;
        cout<<"\n Your Now total Bank Balance is:- "<<no;
    }
};
int main()
{
    AddAmmount bm;
    bm.mini();
    bm.add();
}
