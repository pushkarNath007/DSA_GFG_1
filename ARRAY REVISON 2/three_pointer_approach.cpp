#include<bits/stdc++.h>
using namespace std;

bool two_pointer(int *arr,int left,int right,int k){
    int sum;
    while(left<right){
        sum=arr[left]+arr[right];
        if(sum==k) return true;
        else if(sum<k) ++left;
        else --right;
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    if(arr[0]+arr[1]+arr[2]>k){
        cout<<"NOT POSSIBLE"<<endl;
        exit(0);
    }
    for(int i=0;i<n-2;++i){
        int left=i+1;
        int right=n-1;
        int rest=k-arr[i];
        if(two_pointer(arr,left,right,rest)){
            cout<<"YES"<<endl;
            exit(0);
        }
    }

    cout<<"No"<<endl;
    return 0;
}
