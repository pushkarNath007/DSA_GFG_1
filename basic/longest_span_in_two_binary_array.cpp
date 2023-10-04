#include<bits/stdc++.h>
using namespace std;
int span(int *arr1,int *arr2,int n){
    int sum1=0,sum2=0;
        vector<int>ans(n);
        unordered_map<int,int>mpp;
       
       for(int i=0;i<n;++i){
           sum1+=arr1[i];
           sum2+=arr2[i];
           ans[i]=(sum1-sum2);
       }
       int count=0,sum=0;
       int maxcount=0;
       for(int i=0;i<n;++i){
          
           if(mpp.find(ans[i])!=mpp.end()){
               count=i-mpp[ans[i]];
               maxcount=max(count,maxcount);
           }
           else mpp[ans[i]]=i;
       }
       return count;
}
int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;++i) cin>>arr1[i];
    for(int i=0;i<n;++i) cin>>arr2[i];
    cout<<span(arr1,arr2,n);
    return 0;
}
