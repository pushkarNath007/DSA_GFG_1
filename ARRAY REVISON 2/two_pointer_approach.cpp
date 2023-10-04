#include<bits/stdc++.h>
using namespace std;


bool two_pointer(int *arr,int n,int k){
    int left=0,right=n-1;
    int sum=0;
    while(left<right){
        sum=arr[left]+arr[right];
        if(sum==k) return true;
        else if(sum<k) ++left;
        else --right;
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    if(two_pointer(arr,n,k)) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
