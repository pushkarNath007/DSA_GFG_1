#include<bits/stdc++.h>
using namespace std;

int sliding_window_tech_min_consecutive_element(int *arr,int n,int k){
    int res=0,sum=0;
    for(int i=0;i<k;++i){
        sum+=arr[i];
        res=max(res,sum);
    }
    for(int i=k;i<n;++i){
        sum+=arr[i];
        sum-=arr[i-k];// suppose k=3 then 3 - 3 =0 and i=4 then 4-3 =1st index
        res=min(res,sum);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<sliding_window_tech_min_consecutive_element(arr,n,k)<<endl;
    return 0;
}
