#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int lastdigit= n%10;
    while(n>10){
        n/=10;
    }
    cout<<(n+lastdigit)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
