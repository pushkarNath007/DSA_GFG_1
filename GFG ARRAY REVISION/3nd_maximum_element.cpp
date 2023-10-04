#include<bits/stdc++.h>
using namespace std;

int first_maximum(int *arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int second_maximum(int *arr,int n,int first){
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]==first) continue;
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int first=first_maximum(arr,n);
    int second=second_maximum(arr,n,first);
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]==first || arr[i]==second) continue;
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
}
int main(){
    solve();
    return 0;
}
