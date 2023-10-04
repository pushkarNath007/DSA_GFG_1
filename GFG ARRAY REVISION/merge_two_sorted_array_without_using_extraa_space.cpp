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
    int arr[n],sec[m];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<m;++i){
        cin>>sec[i];
    }
    
    int i=0,j=0,k=n-1;
    while(i<=k && j<m){
        if(sec[j]<=arr[i]) swap(sec[j++],arr[k--]);
        else ++i;
    }
    sort(arr,arr+n);
    sort(sec,sec+m);
    printing(arr,n);
    printing(sec,m);
    return 0;
}
