#include<bits/stdc++.h>
using namespace std;
int count_of_subarray_with_sum_0(int *arr,int n){
    unordered_map<int,int>ans;
    ans[0]=1;
    int count=0,sum=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        if(ans.find(sum)!=ans.end()){
            count+=ans[sum];
            ans[sum]++;
        }
        else ans[sum]=1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int ans=count_of_subarray_with_sum_0(arr,n);
    cout<<ans<<endl;
    return 0;
}
