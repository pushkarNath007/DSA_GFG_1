#include<bits/stdc++.h>
using namespace std;
int count_of_subarray_with_k_sum(int *arr,int n,int k){
    unordered_map<int,int>ans;
    int count =0,sum=0;
    ans[0]=1;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        if(ans.find(sum-k)!=ans.end()){
            count+=ans[sum-k];
        }
        ans[sum]++;
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int ans=count_of_subarray_with_k_sum(arr,n,k);
    cout<<ans<<endl;
    return 0;
}
    
//   2 3 4 5 6 6
