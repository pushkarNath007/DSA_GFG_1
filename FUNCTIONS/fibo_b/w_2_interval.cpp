#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int first=0;
    int second=1;
    long int fib;
    for(int i=2;i<=b;++i){
        fib=first+second;
        first=second;
        second=fib;
        if(a<=i) cout<<fib<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
