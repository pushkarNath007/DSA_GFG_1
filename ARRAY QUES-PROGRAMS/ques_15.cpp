#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int position=0;
    for(int i=0;i<n;++i){
        if(arr[i]==0){
             swap(arr[position],arr[i]);
             ++position;
        }
    }
    position=n-1;
    for(int i=n-1;i>=0;--i){

        if(arr[i]==2){
            swap(arr[position],arr[i]);
            --position;
        }
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
