#include<bits/stdc++.h>
using namespace std;


void printing(int *arr,int n){
    cout<<endl;
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
    int right=n-1;
    int left=0;
    while(left <right){
        while((arr[left]&1)!=0) ++left;
        while((arr[right]& 1)==0) --right;
        if(left<right){
            swap(arr[left],arr[right]);
        }
    }
    printing(arr,n);

    return 0;
}
