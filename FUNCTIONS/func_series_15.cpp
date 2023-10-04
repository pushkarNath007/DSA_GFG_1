/*
Write a c++ program to calculate the given series.
(2/(1*1)) + (2/(2*2)) + (2/(3*3*3)) + (2/(4*4*4*4)) + (2/(5*5*5*5*5)) + ...
+ (2/(n*n*n*n*n*...*n)).

*/
#include<bits/stdc++.h>
using namespace std;
#define ld long double

ld series(int n ){
    long int pro=1;
    for(int i=1;i<=n;++i){
        pro*=n;
    }
    return ((ld)2/pro);
}
void solve(){
    int n;
    cin>>n;
    ld sum=0;
    for(int i=1;i<=n;++i){
       sum+= series(i);
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
