#include<bits/stdc++.h>
using namespace std;

void segregetion(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        while((arr[left]&1)==0) ++left;
        while((arr[right]&1)!=0) --right;
        if(left<right){
        swap(arr[left],arr[right]);
        }
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
    segregetion(arr,n);
    return 0;
}
