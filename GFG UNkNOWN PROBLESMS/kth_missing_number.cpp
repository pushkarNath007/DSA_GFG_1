#include<bits/stdc++.h>
using namespace std;

void kth_missing_num(int arr[],int n,int k){
    for(int i=0;i<n;++i){
        if(arr[i]<n&&arr[abs(arr[i])-1]<=n &&arr[abs(arr[i])-1]>=0){
             arr[abs(arr[i])-1]*=-1;
        }
        
    }
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    kth_missing_num(arr,n,k);
    return 0;
}
