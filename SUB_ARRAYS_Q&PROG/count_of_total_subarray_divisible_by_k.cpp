#include<bits/stdc++.h>
using namespace std;

int count_of_subarray_divisible_by_k(int *arr,int n,int k){
    unordered_map<int,int>ans;
    ans[0]=1;
    int sum=0;
    int count =0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0) rem+=k;
        if(ans.find(rem)!=ans.end()){
            count+=ans[rem];
            ++ans[rem];
        }
        else ans[rem]=1;

    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int ans=count_of_subarray_divisible_by_k(arr,n,k);
    cout<<ans<<endl;
    return 0;
}
