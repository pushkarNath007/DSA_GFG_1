#include<bits/stdc++.h>
using namespace std;

int maximize_1s(int *arr,int n,int k){
    int count=0,maxcount=0,zero=0;
    int j=0;
    for(int i=0;i<n;++i){
        ++count;
        if(arr[i]==0) ++zero;
        while(zero>k){
            --count;
            if(arr[j++]==0) --zero;
        }
        maxcount=max(count,maxcount);
    }
    return maxcount;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<maximize_1s(arr,n,k);
    return 0;
}
