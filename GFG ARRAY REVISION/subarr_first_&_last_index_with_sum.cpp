#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int sum=arr[0];
    for(int i=1,j=0;i<n;){
        if(sum==k){
            cout<<j<<" "<<i-1<<" ";
            exit(0);
        }
        if(sum<k) sum+=arr[i++];
        else sum-=arr[j++];

    }
    cout<<"NOT FOUND";
    return 0;
}
