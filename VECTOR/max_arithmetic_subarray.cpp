#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    int diff=arr[1]-arr[0];
    int count =2;
    int res=2;
    for(int i=2;i<arr.size();++i){
        if(arr[i]-arr[i-1]==diff){
            ++count;
            res=max(res,count);
        }
        else {
            count =2;
            diff=arr[i]-arr[i-1];
        }
    }
    cout<<res<<" ";
    return 0;
}
