// 0 1 1 2 3 5
#include<bits/stdc++.h>
using namespace std;

long int fibo(int n){
    if(n==1||n==0) return n;
    long int fib;
    int start=0;
    int second=1;
    for(int i=2;i<=n;++i){
        fib=start+second;
        start=second;
        second=fib;
    }
    return fib;
}
void solve(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
