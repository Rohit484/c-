#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    void rightBoundary(long long int * drr,vector<int>&arr,int n){
        stack<int> st;
        st.push(n-1);
        arr[n-1]=n;
        for(int i=n-2;i>=0;i--){

           while(!st.empty() and drr[i]<=drr[st.top()]){
               st.pop();
           }
           if(st.empty()) arr[i]=n;
           else arr[i]=st.top();
           st.push(i);
        }


    }
    void leftBoundary(long long int* drr,vector<int>&arr,int n){
        stack<int> st;
        st.push(0);
        arr[0]=-1;
        for(int i=1;i<n;i++){

           while(!st.empty() and drr[i]<=drr[st.top()]){
               st.pop();
           }
           if(st.empty()) arr[i]=-1;
           else arr[i]=st.top();
           st.push(i);
        }


    }
    long long getMaxArea(long long arr[], int n)
    {
        long long ans=LLONG_MIN;
        vector<int> rb(n),lb(n);
        rightBoundary(arr,rb,n);
        leftBoundary(arr,lb,n);
        for(int i=0;i<n;i++){


            int cnt=rb[i]-lb[i]-1;

            long long currAns=cnt*arr[i];
            ans=max(ans,currAns);

        }
        return ans;
    }
};
