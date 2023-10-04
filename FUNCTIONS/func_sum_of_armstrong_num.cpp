#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(long int n){
    int count=0;
    long int m=n;
    while(m!=0){
        m/=10;
        ++count;
    }
    m=n;
    long int sum=0;
    while(m!=0){
        sum+=(pow((m%10),count));
        m/=10;
    }
    if(sum==n) return true;
    return false;
}

void solve(){
    int a,b;
    cin>>a>>b;
    long int sum=0;
    for(int i=a;i<=b;++i){
        if(isarmstrong(i)){
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<"="<<sum<<endl;

}
int main(){
    long int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
