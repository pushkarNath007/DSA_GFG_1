//x*x²/2*x³/3*.....................................N terms
#include<bits/stdc++.h>

using namespace std; 
int main(){
    int base,n;
    cin>>base>>n;
    long double product=1;
    for(int i=1;i<=n;++i ){
        cout<<base<<"^"<<i<<"/"<<i<<" *";
        product=  ((double)(pow(base,i))/i)*product;
    }
    cout<<" ="<<product;
    return 0;
}