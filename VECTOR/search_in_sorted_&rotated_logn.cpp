#include<bits/stdc++.h>
using namespace std;

string search_in_sorted_and_rotated(vector<int>&arr,int k){
    int left=0,right=arr.size()-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==k) return "YES";
        else if(arr[left]<arr[mid]){ // if left side is sorted
            if(k>=arr[left] && k<arr[mid]) right=mid-1;
            else left=mid+1;
        }
        else { // else right side has to be sorted
            if(k>arr[mid]&&k<=arr[right]) left=mid+1;
            else right=mid-1;
        }
        
    }
    return "NO";
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<search_in_sorted_and_rotated(arr,k)<<endl;
    return 0;
}

