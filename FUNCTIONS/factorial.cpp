#include<bits/stdc++.h>
using namespace std;

long int fact(int n){
    long int pro=1;
    for(int i=1;i<=n;++i){
        pro*=i;
    }
    return pro;
}

void solve(){
    int n;
    cin>>n;
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
