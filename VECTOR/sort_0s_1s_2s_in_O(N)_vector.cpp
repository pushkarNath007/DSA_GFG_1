#include<bits/stdc++.h>
using namespace std;

void sort_0s_1s_2s(vector<int>&arr){
    for(int i=0,j=0;i<arr.size()&&j<arr.size();){
        if(arr[i]==0) ++i,++j;
        else if(arr[j]!=0) ++j;
        else swap(arr[i],arr[j]);
    }
    for(int i=arr.size()-1,j=arr.size()-1;i>=0 && j>=0;){
        if(arr[i]==2) --i,--j;
        else if(arr[j]!=2) --j;
        else swap(arr[i],arr[j]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort_0s_1s_2s(arr);
    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
