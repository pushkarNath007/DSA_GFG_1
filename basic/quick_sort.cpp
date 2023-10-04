#include<bits/stdc++.h>
using namespace std;

int random(int left,int right){
    srand(time(NULL));
    return left+rand()%(right-left);
}
int partition(int *arr,int left,int right){
    int pivot=random(left,right);
    swap(arr[left],arr[pivot]);
    pivot=left;
    while(left<right){
        while(arr[left]<=arr[pivot]) ++left;
        while(arr[right]>arr[pivot]) --right;
        if(left<right){
            swap(arr[left],arr[right]);
        }
    }
    swap(arr[pivot],arr[right]);
    return right;
}
void quicksort(int *arr,int left,int right){
    if(left<right){
      int pivot=   partition(arr,left,right);
      quicksort(arr,left,pivot);
      quicksort(arr,pivot+1,right);
    }
}
void printing(int arr[],int n){
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    printing(arr,n);
    quicksort(arr,0,n-1);
    printing(arr,n);
    return 0;
}
