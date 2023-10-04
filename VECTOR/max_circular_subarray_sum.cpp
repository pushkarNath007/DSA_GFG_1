#include<bits/stdc++.h>
using namespace std;
int normal_sum_subarray(vector<int>&arr){
    int maxi=arr[0];
    int res=arr[0];
    for(int i=1;i<arr.size();++i){
        maxi=max(maxi+arr[i],arr[i]);
        res=max(res,maxi);
    }
    return res;
}
int minimum_subarray_sum(vector<int>&arr){
    int mini=arr[0];
    int res=arr[0];
    for(int i=1;i<arr.size();++i){
        mini=min(mini+arr[i],arr[i]);
        res=min(res,mini);
    }
    return res;
}
int max_circular_subarray(vector<int>&arr){
    int sum=0;
    for(int i=0;i<arr.size();++i){
        sum+=arr[i];
    }
    return sum-minimum_subarray_sum(arr);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int normal_sum=normal_sum_subarray(arr);
    int circular_sum=max_circular_subarray(arr);
    cout<< max(normal_sum,circular_sum)<<endl;
    return 0;
}
