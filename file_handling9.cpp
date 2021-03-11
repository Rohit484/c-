#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class product
{

    int pno,price;
    char name[25];
public:
    void get()
    {
        cout<<"\nProduct No ";
        cin>>pno;
        cout<<"\n Name ";
        cin>>name;
        cout<<"\nPrice ";
        cin>>price;
    }
    void show()
    {
        cout<<"\n Product No\t "<<pno;
        cout<<"\n Name\t\t "<<name;
        cout<<"\n Price\t\t "<<price;
        cout<<"\n ___________________";

    }
    int getprodno()
    {
        return pno;
    }
    char *getpname()
    {
        return name;
    }
};
product p;
void add()
{
    ofstream out("shop",ios::app);
    char ch;
    do
    {
        p.get();
        out.write((char *)&p,sizeof(p));
        cout<<"\n New product Added In the shop ";
        cout<<"\n Do you want to continue (Y/N)";
        cin>>ch;
    }while(ch=='y' || ch=='Y');

    out.close();
}
void display()
{
    ifstream in("shop");
    in.read((char *)&p,sizeof(p));
    while(in)
    {
        p.show();
        in.read((char *)&p,sizeof(p));
    }
    in.close();
}

void search()
{
   ifstream in("shop");
   int no,c;
   char name[15];
   cout<<"\n Search By.............";
   cout<<"\n Product No. ";
   cout<<"\n2. Product Name ";
   cout<<"\n Select Search Criteria ";
   cin>>c;
   if(c==1)
   {
       cout<<"\n Enter to product No to Search ";
   cin>>no;
   in.read((char *)&p,sizeof(p));
   while(in)
   {
       if(no==p.getprodno())
       {
           cout<<"\n Record Found!";
           p.show();
       }
        in.read((char *)&p,sizeof(p));
   }
   }
   else if(c==2)
   {
       cout<<"\n Enter product Name ";
       cin>>name;
       in.read((char *)&p,sizeof(p));
       while(in)
       {
           if(strcmpi(name,p.getpname())==0)
           {
               cout<<"\n Record Found! ";
               p.show();
           }
           in.read((char *)&p,sizeof(p));
       }
   }
   else
    cout<<"\n Invailed  Search Option";

   in.close();
}
void del()
{
     ifstream in("shop");//SOURCE FILE
     ofstream out("temp");//TEMPORERY FILE
     int no;
     cout<<"\n Enter to the data for delete ";
     cin>>no;
     in.read((char *)&p,sizeof(p));
     while(in)
     {
         if(no!=p.getprodno())
            out.write((char *)&p,sizeof(p));
         in.read((char *)&p,sizeof(p));
     }
     in.close();
     out.close();
     remove("shop");
     rename("temp","shop");
}
void modify()
{
     cout<<"\n NothiNG here ";
}

int main()
{
    int c;
    do
    {
        cout<<"\n1. Add New product ";
        cout<<"\n2. Display All products ";
        cout<<"\n3.Search a product ";
        cout<<"\n4. Delete a product ";
        cout<<"\n5. Modify a product ";
        cout<<"\n6. Exit ";
        cout<<"\n Select a choice ";
        cin>>c;
        if(c==1)
            add();
        else if(c==2)

            display();
            else if(c==3)
            search();
            else if(c==4)
                del();
            else if(c==5)
                modify();

            }while(c!=6);
}
