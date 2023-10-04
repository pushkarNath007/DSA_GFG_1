#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int left=0,right=n-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==k){ 
            cout<<mid<<endl;
            break;
        }
        if(arr[left]<arr[mid]){
            if(k<arr[mid]&&k>=arr[left]){
                right=mid-1;
            }
            else left=mid+1;
        }
        else{
            if(k<=arr[right]&&k>arr[mid]) left=mid+1;
            else right=mid-1;
        }
    }
    return 0;
}
