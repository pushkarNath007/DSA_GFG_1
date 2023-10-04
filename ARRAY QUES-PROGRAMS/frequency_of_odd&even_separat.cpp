#include<bits/stdc++.h>
using namespace std;


void frequency(int arr[],int n){
    int left=0;
    int right=n-1;
    int odd =0;
    int even =0;
    while(left<=right){
        if(left==right){
            if((arr[left++]&1)==0) ++even;
            else ++odd;
        }
        else {
            if((arr[left++]&1)==0) ++even;
            else ++odd;
            if((arr[right--]&1)==0) ++even;
            else ++odd;
        }
        
    }
    cout<<odd<<endl<<even<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}
