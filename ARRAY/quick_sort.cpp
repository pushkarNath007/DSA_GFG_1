#include<bits/stdc++.h>
using namespace std;

void  printing(int *arr,int size){
    cout<<endl<<endl;;
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
}
int partition(int *arr,int left,int right){
    int pivot=left;
    while(left<=right){
        while(arr[left]<=arr[pivot]) ++left;
        while(arr[right]>arr[pivot]) --right;
        if(left<right) swap(arr[left],arr[right]);
    }
    swap(arr[pivot],arr[right]);
    return right;
}
void  quicksort(int *arr,int left,int right){
    if(left<right){
        int pivot=partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,left+1,right);
    }
}
int main(){
    int arr[]={612,453,253,223,182,254,645,243,113,454,223,121,982,105,35,745,996,32,123,443,976};
    int left=0;
    int size= sizeof(arr)/sizeof(int);
    int right=size-1;
    printing(arr,size);
    quicksort(arr,left,right);
     printing(arr,size);
    return 0;
}
