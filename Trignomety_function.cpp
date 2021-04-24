// C++ code to demonstrate the example of
// trigonometric functions

#include <iostream>
#include <cmath>
using namespace std;

// main() section
int main()
{
    float x;
    float y;

    x = 0.25;
    cout<<"cos("<<x<<") : "<<cos (x)<<endl;
    cout<<"sin("<<x<<") : "<<sin (x)<<endl;
    cout<<"tan("<<x<<") : "<<tan (x)<<endl;
    cout<<"acos("<<x<<"): "<<acos(x)<<endl;
    cout<<"asin("<<x<<"): "<<asin(x)<<endl;
    cout<<"atan("<<x<<"): "<<atan(x)<<endl;
    y = 1.0;
    cout<<"atan2("<<y<<","<<x<<"): "<<atan2(y,x)<<endl;

    return 0;
}
