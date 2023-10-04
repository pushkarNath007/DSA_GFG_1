#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+(right-left)/2);
        if(arr[mid]==k){
            cout<<"Yes"<<" "<<mid<<endl;
            exit(0);
        }
        else if(arr[mid]<k) left=mid+1;
        else right=mid-1;
    }
    cout<<"No";
    return 0;
}
