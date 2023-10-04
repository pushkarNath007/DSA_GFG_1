#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i <n;++i){
        cin>>arr[i];
    }
    int res1=1,res2=1,even=1,odd=1;
    for(int i=1;i<n;++i){
        if((arr[i]&1)==0){
            if((arr[i-1]&1)==0){
                ++even;
                res2=max(res2,even);
            }
            else  even =1;
        }
        else{
            if((arr[i-1]&1)!=0){
                ++odd;
                res1=max(res1,odd);
            }
            else odd=1;
        }
    }
    cout<<res2<<" "<<res1<<endl;
    return 0;
}
