#include<bits/stdc++.h>
using namespace std;
int min_subarray_kadane_reverse_algo(vector<int>&arr){
    int mini=arr[0];
    int res=arr[0];
    for(int i=1;i<arr.size();++i){
        mini=min(arr[i]+mini,arr[i]);
        res=min(mini,res);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<min_subarray_kadane_reverse_algo(arr)<<endl;
    return 0;
}
