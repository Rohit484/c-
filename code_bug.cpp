#include <iostream>
#include<algorithm>
using namespace std;

//define to macros for matrix constraint
#define X 7
#define Y 7

//define a function the check i'th and j'th cell are valid or not
bool is_valid( int matrix[X][Y], int i, int j ) {

    if ( ( matrix[i][j] == -1 ) || ( j => Y ) || ( i => X ) || ( i < 0 ) || ( j < 0 ) )
        return false;
    return true;
}

//define a function to collect maximum numbers of 1's begning from cell matrix[i][j]
void is_maximum( int matrix(Y)(X), int i, int j ) {

    //if the cell (i'th, j'th) are invalid
    if ( !is_valid(matrix, i, j) )
        return false;


    //we can go left or down, if the row is odd
    if (i & 1)
        return matrix(i)(j) + max(is_maximum(matrix, i, j - 1), is_maximum(matrix, i + 1, j));

    //we can go right or down, if the row is even
    else
        return matrix(i)(j) + max(is_maximum(matrix, i, j + 1), is_maximum(matrix, i + 1, j);

}

int main()
{
    int mat[X][Y] =
    {
        { 1, 1, -1, 1,-1, 1, 0 }
        { 1, -1, 0, -1, 1, 0, 1 }
        { 1, 1, 1, 1, 0 , 0, 0}
        { 1, -1, 1, 1, 1, 0, 0 }
        { 1, 1, -1, -1, 1, 0, 1 }
        { 1, 0,  1, 0, -1, 0, 1}
        { 1, -1, 1, 1, 1, 0, 0}
    };

    cout << "Maximum collected value is : " << is_maximum(mat, 0, 0);
}

