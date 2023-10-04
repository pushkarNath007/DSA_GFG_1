#include<bits/stdc++.h>
using namespace std;

bool search_in_infinite_array(int *arr,int k){
    int left=0,right=1;
    while(arr[right]<k){
        if(arr[right]==k) return true;
        else if(arr[left]==k) return true;
        left=right;
        right*=2;
    }
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==k) return true;
        else if(arr[mid]<k) left=mid+1;
        else right=mid-1;
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    if(search_in_infinite_array(arr,k)) cout<<"Yes"<<endl;
    else cout<<"False"<<endl;
    return 0;
}
