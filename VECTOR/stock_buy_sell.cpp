#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();++i){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<n;++i){
        if(arr[i]>arr[i-1]) sum+=(arr[i]-arr[i-1]);
    }
    cout<<sum<<" ";
     return 0;
}
