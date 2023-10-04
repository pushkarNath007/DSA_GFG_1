#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int sum=0;
    int j=0;
    for(int i=0;i<=n &&j<n;){
        if(sum==k);
        //1  -2 -6  0  2  6   5 - -3 = 8   12 6  0
        else if(i==n) sum-=arr[j++];
        else if(sum<k) sum+=arr[i++];
        else if(sum>k) sum-=arr[j++];
        // arr,arr+n
        // vector<int>arr;
        // arr.begin()+1, arr.end()
    }
    //O(2*n)
    return 0;
}
//     * 1-                     12                *23
// sort(arr,arr+n)