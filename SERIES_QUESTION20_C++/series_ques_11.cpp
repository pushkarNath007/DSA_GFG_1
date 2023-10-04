//x/1!*x²/2!*x³/3!*.....................xⁿ/n! (N terms)
#include<bits/stdc++.h>
using namespace std;
#define ld long double
ld isfact(int n){
    ld pro=1;
    if(n==0||n==1||n==2) return n;
    for(int i=1;i<=n;++i){
        pro*=i;
    }
    return (double)pro;
}
int main(){
    int n,base;
    cin>>n>>base;
    ld product=1,fact;
    for(int i=1;i<=n;++i){
        fact=isfact(i);
        cout<<base<<"/"<<fact<<" *";
        product=(base/fact)*product;
    }
    cout<<"="<<product<<endl;
    return 0;
}