#include<bits/stdc++.h>
using namespace std;
vector<int> sort_an_arr_acc(int *arr1,int n,int *arr2,int m){
    unordered_map<int,int>ans;
    vector<int>res;
    for(int i=0;i<n;++i){
        ans[arr1[i]]++;
    }
    
    for(int i=0;i<m;++i){
        while(ans[arr2[i]]!=0){
            res.push_back(arr2[i]);
            ans[arr2[i]]--;
        }
        ans.erase(arr2[i]);
    }
    int val=res.size();
    for(int i=0;i<n;++i){
        if(ans.find(arr1[i])!=ans.end()){
            while(ans[arr1[i]]!=0){
            res.push_back(arr1[i]);
            ans[arr1[i]]--;
            }
         ans.erase(arr1[i]);
        }
    }
    sort(res.begin()+val,res.end());
    return res;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;++i) cin>>arr1[i];
    for(int i=0;i<m;++i) cin>>arr2[i];
    vector<int>res=sort_an_arr_acc(arr1,n,arr2,m);
    for(auto x:res) cout<<x<<" ";
    return 0;
}
