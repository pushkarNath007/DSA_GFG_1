#include<iostream>
using namespace std;

long int reverse_of_num(long int n){
    long int reverse=0;
    while(n!=0){
        reverse=(n%10)+(10*reverse);
        n/=10;
    }
    return reverse;
}
void solve(){
    long int n;
    cin>>n;
    cout<<reverse_of_num(n)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}