//  x/1!*x/3!*x/5!*.........................x/n! (N terms)


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll isfact(int n){
    ll pro=1;
    if(n==0||n==1||n==2) return n;
    for(int i=1;i<=n;++i){
        pro*=i;
    }
    return pro;
}
int main(){
    int n,base;
    cin>>n>>base;
    ld product=1;
    for(int i=1;i<=n;i+=2){
        cout<<base<<"/"<<i<<" *";
        product=((double)base/(isfact(i)))*product;
    }
    cout<<" ="<<product<<endl;
    return 0;
}
