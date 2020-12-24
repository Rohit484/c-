//ROHIT PANDEY
//mTRIX ADD PROGRAM
#include <iostream>
using namespace std;

int main()
{
    int rows, cols, i, j;
    int one[50][50], two[50][50], sum[50][50];

    cout <<"Enter Rows and Columns of Matrix\n";
    cin >> rows >> cols;

    cout <<"Enter first Matrix of size "<<rows<<" X "<<cols;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> one[i][j];
        }
    }
    cout <<"\nEnter second Matrix of size "<<rows<<" X "<<cols;
    for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                cin >> two[i][j];
            }
         }
    for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                sum[i][j] = one[i][j] + two[i][j];
            }
         }

    cout <<"Sum Matrix\n";
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }


}
