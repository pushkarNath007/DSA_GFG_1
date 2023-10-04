#include<bits/stdc++.h>
using namespace std;

void reverse(int *arr, int left,int right){
    while(left<right){
        swap(arr[left++],arr[right--]);
    }
}
void reverse_in_group(int *arr,int n,int k){
    int last =k;
    for(int i=0;i<n;i+=k){// i =i+k
        if(last>n){
            reverse(arr,i,n-1);
            return;
        }
        reverse(arr,i,last-1);
        last+=k;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    reverse_in_group(arr,n,k);
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    return 0;
}
/*
  sort(arr,arr+n);
*/