#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int count=0;
    int m=n;
    while(m!=0){
        m/=10;
        ++count;
    }
    if(count==2){
        if((n/10)%(n%10)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
