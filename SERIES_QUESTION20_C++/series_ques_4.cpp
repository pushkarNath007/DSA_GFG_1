//1*-2*3*-4*5*………………….N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        if((i&1)==0){
            cout<<(i-(2*i))<<" *";
        }
        else cout<<i<<" *";
    }
    return 0;
}
