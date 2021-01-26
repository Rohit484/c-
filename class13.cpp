#include<iostream>
using namespace std;
class computer
{
    int ram,hdd;
    char company[15];
public:
    void getcomputer()
    {
        cout<<"Company";
        cin>>company;
        cout<<"RAM";
        cin>>ram;
        cout<<"HDD";
        cin>>hdd;
    }
    void showcomputer()
    {
        cout<<"Company"<<company<<endl;
        cout<<"RAM"<<ram<<endl;
        cout<<"HDD"<<hdd<<endl;
    }
};
int main()
{
    computer c[5];
    int i;
    for(i=0; i<5;i++)

    c[1].getcomputer();
    for(i=0;i<5;i++)
    c[1].showcomputer();
}
