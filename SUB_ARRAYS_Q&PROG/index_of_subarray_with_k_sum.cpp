#include<bits/stdc++.h>
using namespace std;

void index_of_first_and_last(int *arr,int n,int k){
    int sum=arr[0];
    vector<vector<int>>ans;
    for(int i=1,j=0;i<=n&&j<n;){
        if(sum<k) sum+=arr[i++];
        else if(sum==k){
            cout<<j<<" "<<i-1<<" ";
            return;
        }
        else if(i==n){
            sum-=arr[j++];
        }
        else sum-=arr[j++];
    }
    cout<<" -1";
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(auto &x :arr) cin>>x;
    index_of_first_and_last(arr,n,k);
    
    return 0;
}
