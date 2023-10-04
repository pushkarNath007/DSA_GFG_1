#include<bits/stdc++.h>
using namespace std;


void solve(int arr[],int n){
    int position=0;
    for(int i=0;i<n;++i){
        if(arr[i]==2) swap(arr[position++],arr[i]);

    }
    position=n-1;
    for(int i=n-1;i>=0;--i){
        if(arr[i]==1) swap(arr[position--],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    solve(arr,n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
