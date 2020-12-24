//ROHIT PANDEY
//MATRIX MULTIPLICATION

#include<iostream>
using namespace std;
int main ()
{
int f1, c1, f2, c2, i, j, k;
int a[5][5], b[5][5], c[5][5];
cout << "Enter the number of columns and rows of matrix A : ";
cin >> f1 >> c1;
cout << "Enter number of Cloumns and rows of matrix B : ";
cin >> f2 >> c2;
if (c1 != f2)
{
cout << "Matrices can't be multiplied..";
}
cout << "Input the elements of matrix A : ";
for (i = 0; i < f1; i++)
for (j = 0; j < c1; j++)
cin >> a[i][j];
cout << "Input the elements of matrix B : ";
for (i = 0; i < f2; i++)
for (j = 0; j < c2; j++)
cin >> b[i][j];
for (i = 0; i < f1; i++)
{
for (j = 0; j < c2; j++)
{
c[i][j] = 0;
for (k = 0; k < f2; k++)
{
c[i][j] += a[i][k] * b[k][j];
}
}
}
cout << "Product of matrices\n";
for (i = 0; i < f1; i++)
{
for (j = 0; j < c2; j++)
cout << c[i][j] << "  ";
cout << "\n";
}

}
