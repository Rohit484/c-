#include<iostream>
using namespace std;
class user
{
public:
    int no;
    void enter()
    {
        cout<<"Enter the user value:";
        cin>>no;
    }
    void show()
    {
        cout<<"User Enter the value is:-"<<no<<endl;
    }
};
int main()
{
    user f[6];
    f[1].enter();
    f[1].show();
    f[2].enter();
    f[2].show();
    f[3].enter();
    f[3].show();
    f[4].enter();
    f[4].show();
    f[5].enter();
    f[5].show();
    f[6].enter();
    f[6].show();
}
