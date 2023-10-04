#include<bits/stdc++.h>
using namespace std;
int  remove_duplicates(int *arr,int n){
    for(int i=1,j=1;i<n &&j<n;){
        if(arr[i]>arr[i-1]) ++i,++j;
        else if(arr[j]<=arr[i]) ++j;
        else swap(arr[i],arr[j]);
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int new_size=remove_duplicates(arr,n);
    return 0;
}
