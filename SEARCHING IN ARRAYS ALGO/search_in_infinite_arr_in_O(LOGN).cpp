#include<bits/stdc++.h>
using namespace std;

bool search_in_logn(int *arr,int n,int k){
    int left=0,right=1;
    if(arr[left]==k) return true;
    while(arr[right]<k){
        if(arr[right]==k) return true;
        left=right;
        right*=3;
    }
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==k) return true;
        else if(k<arr[mid]) right=mid-1;
        else left=mid+1;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    // now to search i need to find left and right
    // because we have to use binary search for doing it in O(logn)
    if(search_in_logn(arr,n,k)) cout<<"YES";
    else cout<<"NO"<<endl;
    return 0;
}
