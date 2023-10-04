#include<bits/stdc++.h>
using namespace std;


int equilibrium_point(int *arr,int n){
    int sum=0;
    if(n<3) return -1;
    for(int i=0;i<n;++i){
        sum+=arr[i];
    }
    int ans=0;
    for(int i=0;i<n;++i){
        sum-=arr[i];
        if(sum==ans) return i;
        else ans+=arr[i];
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i) cin>>arr[i];
        equilibrium_point(arr,n);
    }
    return 0;
}
