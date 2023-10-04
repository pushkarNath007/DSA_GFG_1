/*
Write a program in C++ to calculate the given series
1 + 1/2^2 + 1/3^3 + ..+ 1/n^n
*/
#include<bits/stdc++.h>
using namespace std;
#define ld long double

ld fact(int n){
    ld sum=0;
    for(int i=1;i<=n;++i){
        sum+= ((ld)1/(pow(i,i)));
    }
    return sum;
}
void solve(){
    int n;
    cin>>n;
    ld sum=0;
    cout<<fact(n)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
