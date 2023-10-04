#include<bits/stdc++.h>
using namespace std;
int max_length_subarray_divisible_by_k(int *arr,int n,int k){
    unordered_map<int,int>ans;
    ans[0]=-1;
    int sum=0;
    int count=0,maxcount=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0) rem+=k;
        if(ans.find(rem)!=ans.end()){
            count=i-ans[rem];
            maxcount=max(count,maxcount);
        }
        else ans[rem]=i;

    }
    return maxcount;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_length_subarray_divisible_by_k(arr,n,k);
    return 0;
}
// 16
// 50 16 8  8
// 2  2  10 2   <-  rem
