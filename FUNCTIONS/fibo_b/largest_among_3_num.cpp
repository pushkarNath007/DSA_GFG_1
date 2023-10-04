#include<bits/stdc++.h>
using namespace std;
#define maxi(a,b) max(a,b)

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(maxi(a,maxi(b,c)))<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
