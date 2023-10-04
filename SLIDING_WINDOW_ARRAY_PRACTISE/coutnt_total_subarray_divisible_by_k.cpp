#include<bits/stdc++.h>
using namespace std;
int count_subarray_sum_dusisible_by_k(int *arr, int n,int k){
// 3
//-1
//   6 -2 4 10 -3 7
// 0 6  4 8 18 15 22
// 0 0  1 2 0  0  1
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
     }
     ans[rem]++;
 }
 return count;
}
int main(){
     int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<count_subarray_sum_dusisible_by_k(arr,n,k);
    return 0;
}
