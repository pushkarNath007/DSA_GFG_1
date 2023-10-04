#include<bits/stdc++.h>
using namespace std;
int count(int *arr,int n){
    unordered_map<int,int>ans;
    ans[0]=1;
    int sum=0,count=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        if(ans.find(sum)!=ans.end()){
            count+=ans[sum];
        }
        ans[sum]++;
    }
    return count;
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<count(arr,n)<<endl;
    return 0;
}
