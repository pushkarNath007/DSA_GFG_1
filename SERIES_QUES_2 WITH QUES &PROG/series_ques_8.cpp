//2!+4!+6!+8!+.........................N terms
#include<bits/stdc++.h>
using namespace std;

long int fact(int n){
    long int pro=1;
    if(n==1||n==2) return n;
    else {
        for(int i=1;i<=n;++i){
            pro*=i;
        }
    }
    return pro;
}
int main(){
    int n;
    cin>>n;
    long int sum=0;
    for(int i=2;i<=n;i+=2){
        if(i>n) break;
        long int fac=fact(i);
        cout<<(fac)<<" ";
        sum+=fac;
    }
    cout<<"="<<sum;
    return 0;
}
