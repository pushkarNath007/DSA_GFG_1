#include<bits/stdc++.h>
using namespace std;
int max_xor_subarray(int *arr,int n){
    int maxi=1;
    int res=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi^arr[i],arr[i]);
        res=max(res,maxi);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_xor_subarray(arr,n);
    return 0;
}
