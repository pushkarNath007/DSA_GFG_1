#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n && j<n;){
        if((arr[j]&1)==0){
            ++i;
            ++j;
        }
        else if((arr[i]&1)!=0) ++i;
        else swap(arr[i],arr[j]);
    }
    sort(arr,arr+j);
    sort(arr+j,arr+n);
    for(auto x:arr) cout<<x<<" ";
    return 0;
}
