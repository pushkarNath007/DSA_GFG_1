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
    int maxi=arr[0];
    for(int i=1;i<n;++i){
        maxi=max(arr[i],arr[i]+maxi);
        res=max(res,maxi);
    }
    cout<<res<<endl;
    return 0;
}
