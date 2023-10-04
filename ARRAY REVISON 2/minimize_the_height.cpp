#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    sort(arr,arr+n);
    int diff =arr[n-1]-arr[0];
    int maxi=arr[n-1];
    int mini=arr[0];
    for(int i=1;i<n;++i){
        if(arr[i]-k>=0){
            mini=min(arr[0]+k,arr[i]-k);
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            if(diff>=0) diff=min(diff,maxi-mini);
        }
    }
    cout<<diff<<endl;
    return 0;
}
