/*Write a c++ program to calculate the given series.
(2/(1*1)) + (2/(1*2)) + (2/(1*2*3)) + (2/(1*2*3*4)) + (2/(1*2*3*4*5)) + ... +
(2/(1*2*3*4*5*...*n)).*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
double factorial(int n){
    ll product=1;
    for(int i=1;i<=n;++i){
        product*=i;
    }
    return (double)product;
}
int main(){
    int n;
    cin>>n;
    long double sum=0;
    for(int i=1;i<=n;++i){
        sum=(double)2/factorial(i)+sum;
    }
    cout<<endl<<sum;
    return 0;
}

