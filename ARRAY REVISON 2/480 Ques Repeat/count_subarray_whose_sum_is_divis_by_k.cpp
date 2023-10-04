#include<bits/stdc++.h>
using namespace std;
int count(int *arr,int n,int k){
    unordered_map<int,int>ans;
    ans[0]=1;
    int sum=0,count=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0) rem+=k;
        if(ans.find(rem)!=ans.end()){
            count+=ans[rem];
        }
        ans[rem]++;
    }
    return count;
}
int main(){
     int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<count(arr,n,k);
    return 0;
}
//