#include<iostream>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
      int reach=0,jump=0,i=0;
      while(i<n-1){
          if(i+arr[i]<n-1){
               int maxhere = INT_MIN;
               for(int j=i;j<=arr[i]+i;j++){
                   if(arr[j]==0){
                       return -1;
                   }
                   maxhere = max(maxhere,j+arr[j]);
                   if(maxhere>=n-1){
                       jump+=2;
                       return jump;
                   } else if(j+arr[j]==maxhere)
                       reach = j;
               }
               i = reach;
               jump++;
           } else {
               jump++;
               return jump;
          }
       }
      return jump;
   }
};
