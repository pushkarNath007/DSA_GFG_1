#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<m;++i) cin>>arr1[i];
    int count =1;
    cout<<arr[0]<<" ";
    for(int i=1;i<n;++i){
        if(arr[i]!=arr[i-1]){
            cout<<arr[i]<<" ";
            ++count;
        }
    }
    if(!binary_search(arr,arr+n,arr1[0])){
        ++count;
        cout<<arr1[0]<<" ";
    }
    for(int i=1;i<m;++i){
        if(arr1[i]!=arr1[i-1]){
           if(!binary_search(arr,arr+n,arr1[i])){
               cout<<arr1[i]<<" ";
               ++count;
           } 
        }
    }
    cout<<endl<<count;

    return 0;
}