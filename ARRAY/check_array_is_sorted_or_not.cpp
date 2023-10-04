#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        if(arr[left]>arr[left+1]) return false;
        else ++left;
        if(arr[right]<arr[right-1]) return false;
        else --right;
        
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<issorted(arr,n)<<endl;
    return 0;
}
