#include<bits/stdc++.h>
using namespace std;


int primeno(int n){
    for(int i=2;i<n;++i){
        if(n%i==0) return 0;
    }
    return n;
}
void solve(){
    int n;
    cin>>n;
    long int sum=0;
    for(int i=1;i<=n;++i){
        sum+=primeno(i);
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
