#include<bits/stdc++.h>
using namespace std;

void pairs(int *arr,int n){
    int xxor=0;
    for(int i=0;i<n;++i){
        xxor^=arr[i];
    }
    int rsb=xxor&(-xxor);
    int a=0,b=0;
    for(int i=0;i<n;++i){
        if((rsb &arr[i])==0){
            a^=arr[i];
        }
        else b^=arr[i];
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    pairs(arr,n);
    return 0;
}
