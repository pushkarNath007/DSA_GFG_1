#include<bits/stdc++.h>
using namespace std;
int count_subarray_whose_productIs_less_than_k(int *arr,int n,int k){
    int count=0;
    int product=1;
    for(int i=0,j=0;i<n&&j<n;i++){
        product*=arr[i];
        while(product>=k){
            product/=arr[j++];
        }
        count+=((i-j)+1);//3
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<count_subarray_whose_productIs_less_than_k(arr,n,k)<<endl;
    return 0;
}
