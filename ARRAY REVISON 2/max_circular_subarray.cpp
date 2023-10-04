#include<bits/stdc++.h>
using namespace std;

int kadanes_algorithm(int *arr,int n){
    int maxi=arr[0];
    int res=arr[0];
    for(int i=1;i<n;++i){
        maxi=max(maxi+arr[i],arr[i]);
        res=max(res,maxi);

    }
    return res;
}
int minimum_subarray(int *arr,int n){
    int mini=arr[0];
    int res= arr[0];
    for(int i=1;i<n;++i){
        mini=min(mini+arr[i],arr[i]);
        res=min(res,mini);
    } 
    //cout<<endl<<res<<endl; 
    return res;
}
int circular_subarray(int *arr,int n){
    int total_sum=0;
    int circular_subarray;
    for(int i=0;i<n;++i){
        total_sum+=arr[i];
    }
    //cout<<total_sum;
    int minimum_sum=minimum_subarray(arr,n);
    if(minimum_sum!=total_sum){
    circular_subarray=total_sum-minimum_sum;
    return max(circular_subarray,kadanes_algorithm(arr,n));
    }
    else return kadanes_algorithm(arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<circular_subarray(arr,n)<<endl;
    return 0;
}
