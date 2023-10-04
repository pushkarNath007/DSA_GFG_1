#include<bits/stdc++.h>
using namespace std;
void minimum_swap_req(int *arr,int n,int k){
    int count =0;
    for(int i=0;i<n;++i){
        if(arr[i]<=k) ++count;
    }
    //
    int huge =0,minihuge=INT_MAX;
     for(int i=0;i<count;++i){
         if(arr[i]>k) ++huge;
    }
    minihuge=huge;
   //cout<<minihuge<<" ";
    for(int i=count,j=0;i<n &&j<n;++i){
        if(arr[i]>k) ++huge;
        if(arr[j++]>k) --huge;
        minihuge=min(huge,minihuge);
    }
    cout<<minihuge<<" ";
}
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cin>>k;
    minimum_swap_req(arr,n,k);
    return 0;
}
