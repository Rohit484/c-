#include<iostream>
#include<string.h>
using namespace std;
class doctor
{
    int docid;
    char name[15],quali[18];
public:
    doctor( int id,char n[],char,q[] )
    {
        docid=id;
        strcpy(name,n);
        strcpy(quli,q);
    }
    doctor()
    {
        cout<<"Doctor Name:-";
        cin>>name;
        cout<<"Doctor Id";
        cin>>docid;
        cout<<"Dctor Qualification:-";
        cin>>quali;
    }
    void show()
    {
        cout<<"Doctor Name:- "<<name<<endl;
        cout<<"Doctor Id:-"<<docid<<endl;
        cout<<"Doctor Qualification:-"<<endl;
    }
};
int main()
 doctor d2(123,"Rohit dubey","MPHIL");
    doctor d1;

    d2.show();
    d1.show();
