
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<n-2;++i){
        int left=i+1;
        int right=n-1;
        int rem=k-arr[i];
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==rem){
                cout<<i<<left<<right<<endl;
                exit(0);
            }
            else if(sum<rem) ++left;
            else --right;
        }
    }
    cout<<"-1";
    return 0;
}
