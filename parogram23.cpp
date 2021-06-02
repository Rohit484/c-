#include<iostream>
using namespace std;
class solution{
int trailingZeroes(int N){
if(N<5)
return 0;
return (N/5)+trailingZeroes(N/5);
}
};
