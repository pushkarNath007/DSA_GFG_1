/* Write a program to input a number and check whether it is
divisible by 2 and 5 both.*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%2==0 && n%5==0) cout<<"YES"<<endl;
    else cout<<" NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

