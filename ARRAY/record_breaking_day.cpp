#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<n;++i){
            if(arr[i]>maxi && arr[i]>arr[i+1]) ++count;
            maxi=max(maxi,arr[i]);
        }
        cout<<count<<endl;
    }
    return 0;
}
