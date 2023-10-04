// 1!*2!*3!*4!*5!......................N term
#include<bits/stdc++.h>
using namespace std;
#define lld long long int 
int isfactorial(int n){
    lld fact=1;
    if(n==0||n==1) return n;
    for(int i=1;i<=n;++i){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    lld product=1;
    for(int i=1;i<=n;++i){
        product*=isfactorial(i);
    }
    cout<<product<<endl;
    return 0;
}
