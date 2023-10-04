#include<bits/stdc++.h>
using namespace std;

/*

*/
vector<int> mising_and_repeating(int *arr, int n){
    int repeat,missing;
    for(int i=0;i<n;++i){
        if(arr[abs(arr[i])-1]<0){
            repeat=abs(arr[i]);
        }
        else arr[abs(arr[i])-1] *=-1;
    }
    for(int i=0;i<n;++i){
        if(arr[i]>0){
            missing=i+1;
            break;
        } 
    }
    vector<int>ans;
    ans.push_back(repeat);
    ans.push_back(missing);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    vector<int>ans=mising_and_repeating(arr,n);
    for(auto x:ans) cout<<x<<" ";
    return 0;
}
