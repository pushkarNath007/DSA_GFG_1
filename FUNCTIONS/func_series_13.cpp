/*
Write a c++ program to calculate the given series.
(1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) + ... +
(1+2+3+4+5+...+n).

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll sumofseries(int n ){
    ll sum=0;
    cout<<"("<<" ";
    for(int i=1;i<=n;++i){
        cout<<i<<" +";
        sum+=i;
    }
    cout<<" )"<<" ";
    cout<<"="<<sum<<endl;
    return sum;
}
void solve(){
    int n;
    cin>>n;
    ll sum=0,ser;
    //out<<" (";
    for(int i=1;i<=n;++i){
        ser=sumofseries(i);
        cout<<ser<<" +";
        sum+=ser;
    }
    cout<<" )"<<" = "<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
