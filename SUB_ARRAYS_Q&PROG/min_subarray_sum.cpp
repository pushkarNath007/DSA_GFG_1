//it is the exact ooposite of max_subarray sum kadane`s algo  its just a reverse of its algorithm
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int mini=arr[0];
    int res =arr[0];
    for(int i=1;i<n;++i){
        mini=min(mini+arr[i],arr[i]);
        res=min(res,mini);
    }
    cout<<res<<endl;
    return 0;
}
