#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi,arr[i]);
    }
    int ptr[maxi+1];
    for(int i=0;i<n;++i){
        ptr[arr[i]]=0;
    }
    for(int i=0;i<n;++i){
        ++ptr[arr[i]];
    }
    for(int i=0;i<n;++i){
        if(ptr[arr[i]]>n/2){
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}
