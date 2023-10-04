#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int res=arr[0];
    cout<<res<<" ";
    int maxi=INT_MIN;
    for(int i=arr.size()-2;i>=0;--i){

        maxi=max(maxi,arr[i+1]);
        if(arr[i]>maxi) cout<<arr[i]<<" ";
    }
    return 0;
}
