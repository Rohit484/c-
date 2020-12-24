//ROHIT PANDEY
//MATRIX SUBTRACTION

#include<iostream>
using namespace std;
int main()
{
	int m1[3][3], m2[3][3], m3[3][3];

	cout<<"Enter first matrix elements: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m1[i][j];
		}
	}
      cout<<"Enter second matrix elements: "<<endl;
	   for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m2[i][j];
		}
	}
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		m3[i][j]=m1[i][j]-m2[i][j];
		}
	}
	cout<<"Subtraction of two matrices: "<<endl;
	for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<m3[i][j]<<"  ";
		}
		cout<<endl;
	}

	return 0;
}

