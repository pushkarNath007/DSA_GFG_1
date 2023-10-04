#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int odd=0,even=0,maxodd=0,maxeven=0;
    for(int i=0;i<n;++i){
        if((arr[i]&1)==0){
            if((arr[i-1]&1)==0 && i!=0){
                ++even;
                maxeven=max(even,maxeven);
            }
            else even =1;
        }
        else{
            if((arr[i-1]&1)!=0 &&i!=0){
                ++odd;
                maxodd=max(maxodd,odd);
            }
            else odd=1;
        }
    
    }
    cout<<"even = "<<maxeven<<" "<<"odd = "<<maxodd;
    return 0;
}
