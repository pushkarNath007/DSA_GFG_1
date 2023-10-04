#include<bits/stdc++.h>
using namespace std;
int count_triplet_with_sum_less_than_k(int *arr,int n,int k){
    sort(arr,arr+n);
    int count=0;
    
    for(int i=0;i<n-2;++i){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum<k){
                count+=right-left;
                ++left;
            }
            else --right;
        }
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<count_triplet_with_sum_less_than_k(arr,n,k);
    return 0;
}
