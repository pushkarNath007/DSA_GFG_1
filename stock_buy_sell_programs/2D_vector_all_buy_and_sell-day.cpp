#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>all_buy_and_sell(vector<int>&arr){
    int buy=0;
    int hint =0;
    int n=arr.size();
    vector<vector<int>>ans;
    for(int i=1;i<=n;++i){
        if(hint ==0 &&arr[i]>arr[i-1]){
            buy=i-1;
            hint=1;
        }
        else if(hint ==1 &&(arr[i]<arr[i-1] ||i==n)){
            ans.push_back({buy,i-1});
            hint =0;
        }
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    vector<vector<int>>ans=all_buy_and_sell(arr);
    if(ans.empty()) cout<<"0";
    else cout<<"1";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
