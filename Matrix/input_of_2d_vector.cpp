#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>arr;
    int t;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        vector<int>push;
        for(int j=0;j<m;++j){
            cin>>t;
            push.push_back(t);
        }
        arr.push_back({push});
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
