#include<bits/stdc++.h>
using namespace std;

void previous_smaller_element(vector<int>&arr){
    vector<int>res;
    int n=arr.size();
    
    stack<int>ans;
    for(int i=0;i<n;++i){
        while(!ans.empty() && (ans.top()>=arr[i]) ) ans.pop();
        if(ans.empty()){
            res.push_back(-1);     
        }
        else{
            res.push_back(ans.top());
         }
         ans.push(arr[i]);
    }
    for(int i=0;i<n;++i){
        cout<<res[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    previous_smaller_element(arr);
    
    return 0;
}
