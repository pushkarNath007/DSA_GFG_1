#include<bits/stdc++.h>
using namespace std;
int minimum_swaps(int *arr, int n,int k){
    int total=0;
    for(int i=0;i<n;++i){
        if(arr[i]<=k) total++;
    }
    //cout<<total<<" ";
    int count =0;
    int mincount=0;
    for(int i=0;i<total;++i){
        if(arr[i]>k) ++count;
    }
    mincount=count;
    //cout<<mincount<<" ";
    for(int i=total,j=0;i<n;++i){
        if(arr[i]>k) ++count;
        if(arr[j++]>k) --count;
        mincount=min(count,mincount);
    }
    return mincount;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<minimum_swaps(arr,n,k);
    return 0;
}
