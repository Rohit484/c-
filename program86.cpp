#include<iostream>
using namespace std;
class Solution
{
    int findPlatform(int arr[], int dep[], int n){

    sort(arr, arr+n);
    sort(dep, dep+n);

    int i = 1, j = 0;
    int maxtrains = 1;
    int platform = 1;

    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            maxtrains++;
            i++;
        }

        else{
            maxtrains--;
            j++;
        }

        platform = max(platform, maxtrains);
    }

      return platform;
}

};
/*
int findPlatform(int arr[], int dep[], int n){

    sort(arr, arr+n);
    sort(dep, dep+n);

    int i = 1, j = 0;
    int maxtrains = 1;
    int platform = 1;

    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            maxtrains++;
            i++;
        }

        else{
            maxtrains--;
            j++;
        }

        platform = max(platform, maxtrains);
    }

      return platform;
}

*/
