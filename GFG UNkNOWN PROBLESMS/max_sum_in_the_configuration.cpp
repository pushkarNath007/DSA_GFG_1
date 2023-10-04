#include<bits/stdc++.h>
using namespace std;
void max_sum_in_configuration(int arr[],int n){
    int product=0,sum=0;
    for(int i=0;i<n;++i){
        product+=i*arr[i];
        sum+=arr[i];
    }
    int maxproduct=product;
    for(int i=1;i<n;++i){
        product=product-(sum-arr[i-1])+arr[i-1]*(n-1);
        maxproduct=max(product,maxproduct);
    }
    cout<<maxproduct;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    max_sum_in_configuration(arr,n);
    return 0;
}
