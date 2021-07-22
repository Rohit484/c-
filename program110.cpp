#include<iostream>
using namespace std;
class solution
{
    typedef pair<int,pair<int,int>> node;

//This node stores the {value,{arrayNo,indexinThatArray}}
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
         priority_queue<node,vector<node>,greater<node>> q;
         vector<int> result;

         for(int i=0;i<K;i++){
             //Push the 0th element of each array
             q.push({arr[i][0],{i,0}});
         }

         while(!q.empty()){
             //Smallest form all the elements in the heap
             node current = q.top();
             q.pop();

             int value = current.first;
             int arrayNo = current.second.first;
             int index = current.second.second;

             result.push_back(value);

             //We will only push element from that array from where we have poped
             //element

             if(index+1<K){
                 q.push({arr[arrayNo][index+1],{arrayNo,index+1}});
             }

             //Run the loop until the the q is empty

             //Therefore it will take only a SC of O(k)

         }

         return result;
    }
};
};
