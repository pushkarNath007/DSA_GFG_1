#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fact(int n){
    ll pro=1;
    if(n==1||n==2) return n;
    for(int i=1;i<=n;++i){
        pro*=i;
    }
    return pro;
}
void solve(){
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;++i){
        sum+=fact(i);
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
