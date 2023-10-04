#include<bits/stdc++.h>
using namespace std;

int index(int *arr,int n){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[left]==1) return left;
        else if(arr[right]==0 && arr[right+1]==1) return right+1;
        else if(arr[mid]==1){
            if(arr[mid-1]==0) return mid;
            else right=mid-1;
        }
        else left=mid+1;
    }
    return -1;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<index(arr,n)<<endl;
}
int main(){
    solve();
    return 0;
}
