#include<iostream>
using namespace std;
class sample
{
    int data;
public:
    sample(int d)
    {
        data=d;
    }
    void friend sum(sample);
};
void sum(sample s)
{
    int total=s.data+100;
    cout<<"\n Total "<<total;
}
int main()
{
    sample s1(50);
    sum(s1);
}
