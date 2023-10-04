//. 2*-4*6*-8*...............................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i+=2){
        if((i%4)==0) cout<<(i-(2*i))<<" *";
        else cout<<i<<" *";
    }
    return 0;
}