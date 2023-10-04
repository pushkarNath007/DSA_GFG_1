#include<bits/stdc++.h>
using namespace std;

int peak_element_in_logn(vector<int>&arr){
    int left=0,right=arr.size()-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (arr[mid]>=arr[mid+1] || arr[mid+1]==arr.size()-1)) return arr[mid];
        else if(arr[mid-1]>arr[mid]) right=mid-1;
        else left =mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int peak=peak_element_in_logn(arr);
    cout<<peak<<endl;
    return 0;
}