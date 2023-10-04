#include<bits/stdc++.h>
using namespace std;


void solve(){
    long int n;
    cin>>n;
    int lastdigit;
    int count=0;
   
        lastdigit=n%10;
        count=1;
        n/=10;
        long int sec=n;
        while(sec!=0){
            if(sec%10==lastdigit) ++count;
            sec/=10;
        }
        cout<<lastdigit<<"="<<count;
        
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
