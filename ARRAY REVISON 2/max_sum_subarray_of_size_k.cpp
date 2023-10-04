#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int count =0,sum=0,res=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        ++count;
        if(count>k){
            sum-=arr[i-k];
            --count;
        }
        res=max(res,sum);
    }
    cout<<res<<endl;
    return 0;
}


