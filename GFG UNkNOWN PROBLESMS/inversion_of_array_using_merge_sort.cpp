#include<bits/stdc++.h>
using namespace std;
int count=0;

void merge(int *arr,int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int>leftarr(n1),rightarr(n2);
    for(int i=0;i<n1;++i){
        leftarr[i]=arr[left+i];
    }
    for(int i=0;i<n2;++i){
        rightarr[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(rightarr[j]<leftarr[i]){
            ::count+=n1-i ;
            arr[k++]=rightarr[j++];
        }
        else arr[k++]=leftarr[i++];
    }
    while(i<n1 ||j<n2){
        if(i<n1){
            arr[k++]=leftarr[i++];
        }
        else arr[k++]=rightarr[j++];
    }
}
void mergesort(int *arr,int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergesort(arr,0,mid);
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
    cout<<::count<<endl;// :: scope resolution
    return 0;
}
