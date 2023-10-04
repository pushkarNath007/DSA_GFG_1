#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0,j=0;i<n &&j<n;){
        if(arr[j]==0){
            ++i;
            ++j;
        }
        else if(arr[i]!=0) ++i;
        else swap(arr[i],arr[j]);
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}
