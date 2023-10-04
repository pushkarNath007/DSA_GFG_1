#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(arr[i],maxi);
    }
    vector<int>ans(maxi+1);//ans[arr[i]]=1;
    for(int i=0;i<n;++i){
        ans[arr[i]]=1;
    }
    for(int i=0;i<ans.size();++i){
        if(ans[i]==1){
            k--;
        }
        if(k==0){
            cout<<i<<endl;
            exit(0);
        }
    }
    cout<<"-1";
    return 0;
}  
/*
0 1 2 3 4 5 6 7 8
0 0 0 0 0 0 0 0 0
  1 1   1 1 1   1

*/
