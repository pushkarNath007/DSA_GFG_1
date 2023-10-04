#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int maxi1=1;
    int maxi2=1;
    int odd=1;
    int even=1;
    for(int i=1;i<n;++i){
        if((arr[i]&1)==0){
           if((arr[i-1]&1)==0){
                ++even;
            maxi2=max(maxi2,even);
           }
           else{
               even =1;
               maxi2=max(maxi2,even);
           }
        }
        else if((arr[i]&1)!=0){
           if((arr[i-1]& 1)!=0){
                ++odd;
            maxi1=max(maxi1,odd);
           }
           else{
               odd=1;
               maxi1=max(maxi1,odd);
           }
        }
    }
    cout<<maxi1<<" "<<maxi2<<endl;
    return 0;
}
