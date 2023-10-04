#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<k;++i){
        sum+=arr[i];
    }
    int res=sum;
    for(int i=k;i<arr.size();++i){
        sum+=arr[i];
        sum-=arr[i-k];
        res=min(res,sum);
    }
    cout<<res<<" ";
    return 0;
}
