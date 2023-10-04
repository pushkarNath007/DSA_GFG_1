#include<bits/stdc++.h>
using namespace std;

int count=0;

void merge(int *arr,int left,int mid,int right){
   vector<int>leftarr(mid-left+1),rightarr(right-mid);
   for(int i=0;i<leftarr.size();++i){
       leftarr[i]=arr[left+i];
   }
   for(int i=0;i<rightarr.size();++i){
       rightarr[i]=arr[mid+1+i];
   }
   int i=0,j=0,k=left;
   while(i<leftarr.size() && j<rightarr.size()){
       if(leftarr[i]<=rightarr[j]){
           arr[k++]=leftarr[i++];
       }
       else {
           arr[k++]=rightarr[j++];
           ::count+=(leftarr.size()-left);
       }
   }
   while(i<leftarr.size()){
       arr[k++]=leftarr[i++];
   }
   while(j<rightarr.size()){
       arr[k++]=rightarr[j++];
   }
}
void mergesort(int *arr,int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void inversion_of_array(int *arr,int left,int right){
    return mergesort(arr,left,right);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    inversion_of_array(arr,0,n-1);
    cout<<::count<<endl;
    return 0;
}
