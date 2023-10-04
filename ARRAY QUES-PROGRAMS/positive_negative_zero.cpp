#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int zero=0,negative=0,positive=0;
    for(int i=0;i<n;++i){
        if(arr[i]>0) ++positive;
        else if(arr[i]<0) ++negative;
        else ++zero;
    }
    cout<<positive<<" "<<negative<<" "<<zero<<" ";
    return 0;
}
