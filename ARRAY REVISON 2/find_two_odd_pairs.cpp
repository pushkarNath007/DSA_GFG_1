#include<bits/stdc++.h>
using namespace std;
vector<int>odd_pairs(int *arr,int n){
    int xxor=0;
    for(int i=0;i<n;++i){
        xxor^=arr[i];
    }
    int one=0,two=0;
    int rsb=xxor&(-xxor);
    for(int i=0;i<n;++i){
        if((arr[i]&rsb)==0){
            one^=arr[i];
        }
        else two^=arr[i];
    }
    vector<int>ans;
    ans.push_back(one);
    ans.push_back(two);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    vector<int>ans=odd_pairs(arr,n);
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
    return 0;
}
