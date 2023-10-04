#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int left,int mid,int right){
    int n=mid-left+1;
    int m=right-mid;
    int leftarr[n];
    int rightarr[m];
    for(int i=0;i<n;++i){
        leftarr[i]=arr[left+i];
    }
    for(int i=0;i<m;++i){
        rightarr[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n && j<m){
        if(leftarr[i]<=rightarr[j]){
            arr[k++]=leftarr[i++];
        }
        else{
            arr[k++]=rightarr[j++];
        }
    }
    while(i<n){
        arr[k++]=leftarr[i++];
    }
    while(j<m){
        arr[k++]=rightarr[j++];
    }
    
}
void mergesort(int *arr,int left,int right){
    int mid=left+(right-left)/2;
    if(left<right){
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    return 0;
}
/*
   divide and conqour
     
*/