#include<bits/stdc++.h>
using namespace std;

void largest_till_kth(int arr[],int n,int k){
    int old =arr[k-1];// k is position not inde
        sort(arr,arr+n);
        cout<<arr[k-1]<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    largest_till_kth(arr,n,k);
    return 0;
}
