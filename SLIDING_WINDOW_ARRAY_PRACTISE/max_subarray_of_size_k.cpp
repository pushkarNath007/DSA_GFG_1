#include<bits/stdc++.h>
using namespace std;
int max_subarray(int *arr,int n,int k){
    int sum=0,maxsum=INT_MIN;
    for(int i=0,j=0;i<n;++i){
        sum+=arr[i];
        if(i>=k) sum-=arr[j++];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
   cout<<max_subarray(arr,n,k);
    return 0;
}
