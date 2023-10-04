#include<bits/stdc++.h>
using namespace std;

long int fact(int n){
    if(n==1||n==2) return n;
    long int pro =1;
    for(int i=1;i<=n;++i){
        pro*=i;
    }
    return pro;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            cout<< (fact(i)/(fact(j)*fact(i-j)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
