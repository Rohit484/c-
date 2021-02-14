#include<iostream>
using namespace std;
void printNos(int N);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        printNos(N);
    }
    return 0;
}
void print(int N)
{
    if(N==0)
    {
        return ;
    }
    print(N-1);
    cout<<N<<" ";

}
void printNos(int N)
{
    print(N);
    cout<<"\n";
}
