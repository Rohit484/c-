#include<iostream>




using namespace std;




int main()




{




int n,i,j;




cin>>n;




int arr[n];




for(i=0;i<n;i++)




cin>>arr[i];




for(i=0;i<n;i++)




{




for(j=i+1;j<n && arr[i]>=arr[j];j++);




if(j==n)




cout<<arr[i]<<" ";




}




return 0;




}
