#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll facto(int n){
    int fact=1;
    for(int i=1;i<=n;++i){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;++i){
        sum+=facto(i);
    }
    cout<<endl<<sum;

    return 0;
}
