#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=i;
    }
    for(int i=0;i<sqrt(100);i++){
       
    }
    
    int del=sum-n;
    int row=sum+45;
    return 0;
}
/* 
    O(1) + O(1) + O(n) + O(100*n) + O(1) +O(1) + O(1);
    O(100*n)
    O(n)  O(logn)  O(nlogn) O(n^2) O(2^n)

    10^8   10^7      


    100
    50
    25
    12
    6
    3
    2
    1


    16          2^4
    8           2^3
    4           2^2
    2           2^1
    1           2^0
*/
