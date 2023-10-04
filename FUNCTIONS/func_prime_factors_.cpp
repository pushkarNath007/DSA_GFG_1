#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;++i){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    long int n;
    cin>>n;
    for(int i=2;i<=(n/2);++i){
        if(isprime(i)){
            if(n%i==0){
                if((n/i)!=n){
                    if(isprime((n/i))) {
                        cout<<i<<"*"<<(n/i)<<endl;
                        return;
                    }
                }
            }
        }
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
