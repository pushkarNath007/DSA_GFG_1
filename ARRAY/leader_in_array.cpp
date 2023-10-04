#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int previous=INT_MIN;
    int current=arr[n-1];
    for(int i=n-2;i>=0;--i){
        current=max(current,arr[i]);
        
    }
    return 0;
}
