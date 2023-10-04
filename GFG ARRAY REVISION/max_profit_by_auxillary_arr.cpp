#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int diff=0;
    vector<int>compare(n);
    int maxi=arr[n-1];
    compare[n-1]=arr[n-1];
    for(int i=n-2;i>=0;--i){
        if(arr[i]>arr[i+1]){
             maxi= arr[i];
             compare[i]=maxi;
        }
        else{
            maxi=max(maxi,arr[i]);
            compare[i]=maxi;
        }
    }
    for(int i=0;i<n;++i){
        diff=max(diff,compare[i]-arr[i]);
    }
    
    cout<<diff<<" ";
    return 0;
}
