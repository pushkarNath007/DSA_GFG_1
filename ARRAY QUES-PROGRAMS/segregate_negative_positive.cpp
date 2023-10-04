#include<bits/stdc++.h>
using namespace std;
void segregating_positive_nega(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        while(arr[left]>-1) ++left;
        while(arr[right]<0) --right;
        if(left<right){
            swap(arr[left],arr[right]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];

    }
    segregating_positive_nega(arr,n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
