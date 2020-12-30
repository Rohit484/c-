#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    long long int n;

    cin>>n;

    long long int A[n],count1 = 0,sum = 0,count2 = 0;

    for(int i = 0; i<n; i++){

        cin>>A[i];

    }

    sort(A,A+n);

    for(int i = 0; i<n; i++){



        if((A[i+1]-A[i])==1){

            count1++;

        }

        else if(A[i+1]==A[i]){

            count2++;

            count1++;

        }

        else{

            if(count1!=count2){

                sum+= (count1*(count1+1))/2;

            }

            count1=0;

            count2=0;

        }



    }



    cout<<sum<<endl;

    return 0;

}
