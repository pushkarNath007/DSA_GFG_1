#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(vector<int>&arr){
    int maxi=arr[0];
    int res=arr[0];
    for(int i=1;i<arr.size();++i){
        maxi=max(maxi+arr[i],arr[i]);
        res=max(res,maxi);
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
    cout<<max_sum_subarray(arr)<<endl;
    return 0;
}
