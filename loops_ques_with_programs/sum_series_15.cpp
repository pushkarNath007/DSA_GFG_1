 /*Write a c++ program to calculate the given series.
(2/(1*1)) + (2/(2*2)) + (2/(3*3*3)) + (2/(4*4*4*4)) + (2/(5*5*5*5*5)) + ...
+ (2/(n*n*n*n*n*...*n)).*/

#include<bits/stdc++.h>
using namespace std;
#define lld  long double
#define ll long long int 
ll multiply(int n){
    ll product=1;
    for(int i=1;i<=n;++i){
        product*=n;
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    lld sum=0;
    for(int i=1;i<=n;++i){
        sum=((lld)2/multiply(i))+sum;
    }
    cout<<sum;
    return 0;
}
