#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int left=0;
    for(int i=n-1;i>=3;--i){
        int j=i-1;
        int diff=k-(arr[i]+arr[j]);
        if(diff<arr[0]) continue;
        while(j>left){

            int right=j-1;
            while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==diff){
                cout<<i<<" "<<j<<" "<<left<<" "<<right;
                exit(0);
            }
            else if(sum<diff) ++left;
            else --right;

            }
            --j;
        }
    }
    cout<<"-1";
    return 0;
}
