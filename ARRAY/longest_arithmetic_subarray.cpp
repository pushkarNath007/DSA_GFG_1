// arithmetic subarray =  whose  consecutive element diff are same like arr[j+1]-arr[j]== last diff
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int diff = arr[1]-arr[0];
    int count=2,previous=0;
    int j=2;
    while(j<n){
        if(arr[j]-arr[j-1]==diff){
            ++count;
        }
        else {
            if(previous ==0)  previous =count;
            else if(previous<count) previous = count;
            count=2;
            diff=arr[j]-arr[j-1];
        }
        
        ++j;
    }
    count=max(previous,count);
    cout<<count<<endl;
   
    
    
}
int main(){
    solve();
    return 0;
}
