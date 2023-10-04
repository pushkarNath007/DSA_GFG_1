#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();++i){
        cin>>arr[i];
    }
    int k,x;
    cin>>k>>x;
    int sum=0,res=INT_MIN;
    for(int i=0;i<k;++i){
        sum+=arr[i];
    }
    if(sum<x) res=sum;
    for(int i=k;i<n;++i){
        sum+=arr[i];
        sum-=arr[i-k];
        if(sum<x) res=max(res,sum);
    }
    cout<<res<<endl;
    return 0;
}
