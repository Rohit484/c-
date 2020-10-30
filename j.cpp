#include<iostream>
using namespace std;
int main ()
{
    int test[3][2]={{2,-3},{4,3},(9,1)};
    for (int i=0; i<3; ++i)
    {
        for (int j=0; j<2; ++j)
        {
            cout<<"test["<<i<<"]["<<j<<"]="<<test[i][j]<<endl;
        }
        return 0;
    }


}
