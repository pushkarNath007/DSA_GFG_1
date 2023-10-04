#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int i=1,j=1;
    for(i,j;i<n &&j<n;){
            if(arr[j]>arr[j-1] && arr[j]!=arr[j-1]){
                ++j,++i;
            }
            else if(arr[i]<=arr[j]) ++i;
            else swap(arr[j],arr[i]);
    }
    for(int i=0;i<j;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
