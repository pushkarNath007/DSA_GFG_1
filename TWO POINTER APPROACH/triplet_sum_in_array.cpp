#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,arr+n);
    for(int i=0;i<n-2;++i){
        int left=i+1;
        int right=n-1;
        int val=k-arr[i];
        while(left<right){
            int sum=(arr[left]+arr[right]);
            if(sum==val) {
                cout<<"YES"<<endl;
                exit(0);
            }
            else if(sum>val) --right;
            else ++left;
        }
    }
    cout<<"-1";
    return 0;
}
