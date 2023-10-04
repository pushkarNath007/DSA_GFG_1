// its a sorted array so 
#include<bits/stdc++.h>
using namespace std;

int first_occurence_binary_search(vector<int>&arr){
    int left=0,right=arr.size()-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==1){
            if(arr[mid-1]==0) return mid;
            else right=mid-1;
        }
        else if(arr[mid]<1) left=mid+1;
        else  right=mid-1;
    }
    return -1;
}
int last_occurence_of_1s_through_binary_search(vector<int>&arr){
    int left=0;
    int right=arr.size()-1,mid;
    while(left<=right){
         mid=(left+right)/2;
         if(arr[mid]==1){
             if(arr[mid+1]!=1) return mid;
             else left=mid+1;
         }
         else if(arr[mid]<1) left=mid+1;
         else right=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();++i){
        cin>>arr[i];
    }
// O( logn) means binary search so we need to find first occurence and last ocuurence and mus them and add one
    int firstocuurence=first_occurence_binary_search(arr);
    int last_ocuurence=last_occurence_of_1s_through_binary_search(arr);
    cout<<(last_ocuurence-firstocuurence+1)<<" ";
    return 0;
}
