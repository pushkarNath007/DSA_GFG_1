#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int arr1[n];
    int j=0;
     arr1[j++]=arr[0];
    for(int i=1;i<n;++i){
        if(arr[i]!=arr[i-1]) arr1[j++]=arr[i];
    } 
    for(int i=0;i<j;++i) {
        cout<<arr1[i]<<" ";
    }
     return 0;
}
