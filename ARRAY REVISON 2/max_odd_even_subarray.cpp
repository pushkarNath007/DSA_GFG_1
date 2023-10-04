#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int odd=0,even=0;
    int maxodd=0,maxeven=0;
    for(int i=0;i<n;++i){
        if((arr[i]&1)!=0){
            if((arr[i-1]&1)!=0) ++odd;
            else  odd=1;
            maxodd=max(maxodd,odd);
        }
        else{
            if((arr[i-1]&1)==0) ++even;
            else even=1;
            maxeven=max(even,maxeven);
        }
    }
    printf("\nodd->%d\t even->%d",maxodd,maxeven);
    return 0;
}
