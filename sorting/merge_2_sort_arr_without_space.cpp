#include<bits/stdc++.h>
using namespace std;

void printing(int *arr,int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<m;++i){
        cin>>arr1[i];
    }
    int i=0,k=n-1,j=0;
    while(i<k &&j<m){
        if(arr1[j]<=arr[i]) swap(arr1[j++],arr[k--]);
        else ++i;
    }
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    printing(arr,n);
    printing(arr1,m);
    return 0;
}