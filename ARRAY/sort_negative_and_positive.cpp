#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
       if(arr[left]==0)  ++left;
       if(arr[right]!=0) --right;
       if(arr[left]!=0 &&arr[right]==0) swap(arr[left],arr[right]);
    }
    left=0;
    right=n-1;
    while(left<right){
        if(arr[right]==2) --right;
        if(arr[left]!=2) ++left;
        if(arr[right]!=2 && arr[left]==2) swap(arr[left],arr[right]);
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    sort(arr,n);
    return 0;
}


