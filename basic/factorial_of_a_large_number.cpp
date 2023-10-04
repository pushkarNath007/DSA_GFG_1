#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fact(vector<ll>&arr,ll n){
    int carry=0;//  0  2
    //              0  1
    for(int i=0;i<arr.size();++i){
        int pro=(arr[i]*n)+carry;// 1
        //        2   *5+2=12
        arr[i]=pro%10;// 2 
        carry=pro/10;// 1
    }
    while(carry!=0){
        arr.push_back(carry%10);
        carry/=10;
    }
}
int main(){
    long long  n;
    cin>>n;
    vector<ll>ans;
    ans.push_back(1);
    for(int i=2;i<=n;++i){
        fact(ans,i);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();++i) cout<<ans[i]<<" ";
    return 0;
}
