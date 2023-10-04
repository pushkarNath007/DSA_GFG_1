#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    int x=(1e9+7);
    int a=0%x,b=1%x;
    int ans;
    if(n==0) return a;
    if(n==1) return b;
    for(int i=2;i<=n;++i){
        ans=(a+b)%x;
        a=b;
        b=ans;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
