#include<bits/stdc++.h>
using namespace std;

void sum_and_productOf_factors(int n){
    long int sum=0,product=1;
    for(int i=1;i<=n;++i){
        if(n%i==0){
            sum+=i;
            product*=i;
            cout<<i<<" ";
        }
    }
    cout<<" sum ="<<sum<<endl;
    cout<<" "<<"product ="<<" "<<product<<endl;
}
void solve(){
    int n;
    cin>>n;
    sum_and_productOf_factors(n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}