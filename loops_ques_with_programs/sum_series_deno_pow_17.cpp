/*Write a program in C++ to calculate the given series
1 + 1/2^2 + 1/3^3 + ..+ 1/n^n*/
#include<bits/stdc++.h>
using namespace std;
#define ld long double

int main(){
    int n;
    cin>>n;
    ld sum=0;
    for(int i=1;i<=n;++i){
        sum=(1/pow(i,i))+sum;/*   ( int /float )= float but  int /int  int doesnt 
        matter u r storing that float in int it will stay int*/ 
    }
    cout<<endl<<sum;
    return 0;
}

