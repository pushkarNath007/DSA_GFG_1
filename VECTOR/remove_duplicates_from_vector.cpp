#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int i,j;
    for( j=1,i=1;i<arr.size()&&j<arr.size();){
        if(arr[i]!=arr[i-1] && arr[i]>arr[i-1]) ++i,++j;
        else if(arr[j]<=arr[i]) ++j;
        else swap(arr[i],arr[j]);
    }
     for(int m=0;m<i;++m){
         cout<<arr[m]<<" ";
     } 
    return 0;
}
