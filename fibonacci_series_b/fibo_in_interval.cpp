#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long long int first=0;
    long long int sec=1;
    long long int fibo;
    for(int i=2;i<=m;++i){
        fibo=first+sec;
        first=sec;
        sec=fibo;
        if(i>=n){
            cout<<fibo<<" ";
        }
    }
    return 0;
}
