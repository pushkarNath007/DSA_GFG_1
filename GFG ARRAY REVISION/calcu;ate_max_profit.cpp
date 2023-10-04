#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int mini=arr[0];
    int diff=-1;
    for(int i=1;i<n;++i){
        if(arr[i]<=arr[i-1]) mini=arr[i];
        else{
            diff=max(diff,arr[i]-mini);
        }
    }
    cout<<diff<<" ";
    return 0;
}
