#include<bits/stdc++.h>
using namespace std;

int kadanes_algo(int*arr,int n){
    int mini=arr[0];
    int res=arr[0];
    for(int i=1;i<n;++i){
        mini=max(mini+arr[i],arr[i]);
        res=max(res,mini);
    }
    return res;
}
int minimum_subarray_sum(int *arr,int n){
    int mini=arr[0];
    int res=arr[0];
    for(int i=1;i<n;++i){
        mini=min(mini+arr[i],arr[i]);
        res=min(res,mini);
    }
    return res;
}
int max_circular(int *arr,int n){
    int total=0;
    for(int i=0;i<n;++i) total+=arr[i];
    int minsubarr=minimum_subarray_sum(arr,n);
    int circular_sub=minsubarr;
    if(total!=minsubarr){
        circular_sub=total-minsubarr;
    }
    return max(circular_sub,kadanes_algo(arr,n));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_circular(arr,n)<<endl;
    return 0;
}
