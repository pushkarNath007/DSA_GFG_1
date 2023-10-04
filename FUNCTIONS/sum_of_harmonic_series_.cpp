#include<bits/stdc++.h>
using namespace std;
#define ld long double

ld sumofharmonic(int n){
    ld sum=0;
    for(int i=1;i<=n;++i){
        sum+=((double)1/i);
    }
    return sum;
}
void solve(){
    int n;
    cin>>n;
    //ld sum=0;
    
    cout<< sumofharmonic(n)<<endl;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
