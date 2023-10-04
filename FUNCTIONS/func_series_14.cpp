/*
Write a c++ program to calculate the given series.
(2/(1*1)) + (2/(1*2)) + (2/(1*2*3)) + (2/(1*2*3*4)) + (2/(1*2*3*4*5)) + ... +
(2/(1*2*3*4*5*...*n)).

*/
#include<bits/stdc++.h>
using namespace std;
#define ld long double

ld calci(int n){
    ld pro;
    long int fact=1;
    for(int i=1;i<=n;++i){
        fact*=i;
    }
    pro=(long double)2/fact;
    cout<<pro<<" +";
    return pro;
    
}

void solve(){
    int n;
    cin>>n;
    ld sum =0;
    for(int i=1;i<=n;++i){
        sum+=calci(i);
    }
    cout<<" ="<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
