#include<bits/stdc++.h>
using namespace std;

int smallest_subarray_with_sum_greater_than_k(int *arr,int n,int k){
    int count=0;
    int mini=INT_MAX;
    int sum=0;
    for(int i=0,j=0;i<=n &&j<n;){
      //   
        sum+=arr[i++];
        while(sum>k &&j<n){
            count=i-j;
            mini=min(count,mini);
            sum-=arr[j++];
        }
    }
    return mini;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<smallest_subarray_with_sum_greater_than_k(arr,n,k);
    return 0;
}
