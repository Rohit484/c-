#include<iostream>
#include<string.h>
using namespace std;
class furniture
{
    char name[12],materical[10];
    int price;
public:
    furniture()
    {

    }

    furniture(char nm[], char mat[],int cost[])
    {
        strcpy(name,nm);
        strcpy(materical,mat);
        price=cost;
    }
    void show()
    {
        cout<<"Name "<<name<<endl;
        cout<<"Made of "<<materical<<endl;
        cout<<"Price "<<price<<endl;

    }
    furniture(furniture &f)
    {
        strcpy(name,f.name);
        strcpy(materical,f.materical);
        price=f.price;
    }

};
int main()
{
    furniture of("Chair","Wood",5000);
    furniture hf;
    furniture sf(of);
    of=hf;
    of.show();
    hf.show();
    sf.show();
}
