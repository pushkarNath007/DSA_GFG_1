#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,k,x;
   cin>>n>>k>>x;
   int arr[n];
   for(int i=0;i<n;++i) cin>>arr[i];
    int sum=0;
    int maxsum=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        if(i>=k){
            sum-=arr[i-k];
        }
        if(sum<x) maxsum=max(sum,maxsum);
    }
    cout<<maxsum<<endl;
    return 0;
}

