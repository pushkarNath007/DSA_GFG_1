#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int diff=arr[1]-arr[0];
    int count=2;
    int res =2;
    for(int i=2;i<n;++i){
        if(arr[i]-arr[i-1]==diff){
            ++count;
            res=max(res,count);
        }
        else{
            count =2;
            diff=arr[i]-arr[i-1];
            res=max(res,count);
        }
    }
    cout<<res<<endl;
    return 0;
}
/*
 diff  = -3;
 count=2;
 maxcoubt=2;
 for(int i=2;i<n;++i){
     if(arr[i]-arr[i-1]==diff){
         ++count;
     }
     else {
         count=2;
         diff=arr[i]-arr[i-1];
     }
     maxcount=max(maxcount,count);
 }
      

*/