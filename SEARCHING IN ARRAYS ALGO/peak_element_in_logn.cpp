#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int left=0,right=n-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if((mid==0  || arr[mid]>=arr[mid-1]) && (arr[mid]>=arr[mid+1]  ||arr[mid+1]==n-1)){
            cout<<arr[mid]<<endl;
            break;
        }
        else if(arr[mid-1]>arr[mid]) right =mid-1;
        else left=mid+1;
    }
    return 0;
}
