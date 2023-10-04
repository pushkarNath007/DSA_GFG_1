#include<bits/stdc++.h>
using namespace std;
int count(int *arr,int n,int k){
    int count =0;
    sort(arr,arr+n);
    for(int i=0;i<n-2;++i){
        int left=i+1,right=n-1;
        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum<k){
                count+=right-left;
                ++left;
            }
            else --right;
        }
    }
    return count;
}
int main(){
     int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    
    cout<<count(arr,n,k)<<endl;
    return 0;
}
