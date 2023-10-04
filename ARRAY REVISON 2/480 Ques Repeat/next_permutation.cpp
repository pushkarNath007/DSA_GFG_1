// 1 5 4 3 2 1
// 2 1 1 3 4 5
#include<bits/stdc++.h>
using namespace std;

void next_permutation(vector<int>&arr, int n){
    int i=n-2;
    int j=n-1;
    while(i>=0){
        if(arr[i]>=arr[i+1]) --i;
        else{
            if(arr[j]<=arr[i]) --j;
            else {
                swap(arr[i],arr[j]);
                
                break;
            }
        }
    }
    reverse(arr.begin()+i+1,arr.end());
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    next_permutation(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}
