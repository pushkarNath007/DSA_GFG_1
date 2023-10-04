#include<bits/stdc++.h>
using namespace std;
void segregate_odd_even(int *arr,int n){
    int left=0,right=n-1;
    while(left<right){
        if((arr[left]&1)==0) ++left;
        if((arr[right]&1)!=0) --right;
        if((arr[left]&1)!=0 &&(arr[right]&1)==0 && left<right) swap(arr[left],arr[right]);
    }
    sort(arr,arr+(right+1));
    sort(arr+(right+1),arr+n);
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    segregate_odd_even(arr,n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    solve();
    return 0;
}
