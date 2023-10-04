#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int n;
    cin>>n;                                      
    int count=-1;
    int val=0;
    while(n!=0){
        if((n%10)==0) ++count;
        else if(n%10==1){
            ++count;
            val+=(pow(2,count));
        }
        n/=10;
    }
    cout<<val<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}/*
         2^5    2^4   2^3    2^2   2^1  2^0
         32     16    8      4      2    1
          1      0    0       0     1    0  =  34    power =-1
                sum+= pow(2,power)

*/



























