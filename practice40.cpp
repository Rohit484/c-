/*#include<iostream>
using namespace std;
int main()
{
    int a=9;
    if(a==9)
    {
        cout<<"NINEY"<<endl;
    }
   if(a>0)
    {
        cout<<"Positive"<<endl;
    }
    else
    {
        cout<<"Negative"<<endl;
    }
}

#include<iostream>
using namespace std;
class Rectangle
{
    int width,height;
public:
    void set_values (int,int);
    int area()
    {
        return width*height;
    }
};
void Rectangle::set_values(int x,int y)
{
    width=x;
    height=y;
}
int main()
{
    Rectangle rect;
    rect.set_values(3,4);
    cout<<"Area: "<<rect.area();
    return 0;
}


#include<iostream>
using namespace std;
class Rectangle
{
    int width,height;
public:
    void set_values(int ,int);
    int area()
    {
        return width*height;
    }
};
void Rectangle::set_values(int x,int y)
{
    width=x;
    height=y;

}
int main()
{
    Rectangle rect,rectb;
    rect.set_values(3,4);
    rectb.set_values(5,6);
    cout<<"rect area: "<<rect.area()<<endl;
    cout<<"rectb area: "<<rectb.area()<<endl;
}


#include<iostream>
using namespace std;
class Rectangle{
    int width,height;
public:
    Rectangle (int,int);
    int area()
    {
        return (width*height);

    }


};
Rectangle:: Rectangle(int a ,int b)
    {
        width=a;
        height=b;
    }
    int main()
    {
        Rectangle rect(3,4);
        Rectangle rectb(5,6);
        cout<<"Rect area: "<<rect.area()<<endl;
        cout<<"rectb area: "<<rectb.area()<<endl;
    }

#include<iostream>
using namespace std;
class Circle
{
    double radius;
public:
    Circle(double r)
    {
        radius =r;
    }
    double circum()
    {
        return 2*radius*3.14159265;
    }
};
int main()
{
    Circle foo(10.0);
    Circle bar=20.0;
    Circle baz{30.0};
    Circle qux={40.0};
    cout<<"Foo's circumference: "<<foo.circum()<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class Circle
{
    double radius;
public:
    Circle(double r) : radius(r)
    {

    }
    double area()
    {
        return radius*radius*3.14159265;
    }
};
class Cylinder
{
    Circle base;
    double height;
public:
    Cylinder(double r,double h) : base(r),height(h) {}
    double volume()
    {
        return base.area()*height;
    }
};
int main()
{
    Cylinder foo(10,20);
    cout<<"Foo's volume: "<<foo.volume()<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class Rectangle{
   int width,height;
   public:
       Rectangle(int x, int y) : width(x),height(y)
       {

       }
       int area(void)
       {
           return width*height;
       }
};
int main()
{
    Rectangle obj(3,4);
    Rectangle *foo, *bar, *baz;
    foo=&obj;
    bar=new Rectangle(5,6);
    baz=new Rectangle[2]{{2,5},{3,6}};
    cout << "obj's area: " << obj.area() << '\n';
  cout << "*foo's area: " << foo->area() << '\n';
  cout << "*bar's area: " << bar->area() << '\n';
  cout << "baz[0]'s area:" << baz[0].area() << '\n';
  cout << "baz[1]'s area:" << baz[1].area() << '\n';
  delete bar;
  delete[] baz;
  return 0;
}*/
#include<iostream>
using namespace std;
class Room{
    public:
    int len,bre,hei;
    int calculatearea()
    {
        return len*bre;
    }
    int calculatevolue()
    {
        return len*bre*hei;
    }
};
int main()
{
    Room rm;
    int l,b,h;
    cout<<"Enter the Length, Breadth and Height: "<<endl;
    cin>>l>>b>>h;
    cout<<rm.calculatearea()<<endl;
    cout<<rm.calculatevolue()<<endl;
}
