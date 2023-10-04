#include<bits/stdc++.h>
using namespace std;
vector<long long> array_puzzle(long long *arr, int n){
    long long total=1;
    vector< long long >ans(n);
    vector< long long>left(n),right(n);
    left[0]=1,right[n-1]=1;  
    for(int i=1;i<n;++i){
        left[i]=left[i-1]*arr[i-1];
    }  
    for(int i=n-2;i>=0;--i){
        right[i]=right[i+1]*arr[i+1];
    }  
    for(int i=0;i<n;++i){
        ans[i]=left[i]*right[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    vector<long long >ans=array_puzzle(arr,n);
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
    return 0;
}
  /*
      10
      func(int a,int b)
      int c = a+b;
      return c;

  */