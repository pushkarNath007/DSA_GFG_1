#include<bits/stdc++.h>
using namespace std;


int partition(int *arr,int left,int  right){
        int pivot=left;
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
        int pivot = partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }
}
void printing(int *arr, int size){
    cout<<endl;
    for(int i=0;i<size;++i){
        cout<<"\t"<<arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    printing(arr,n);
    quicksort(arr,left,right);
    printing(arr,n);
    cout<<endl<<"after partitioning odd and even element\n";
    int mid=(0 +(n-1))/2;
    int j= mid;
    for(int i=0;i<=mid && j<=(n-1) ;){
        while((arr[i]&1)!=0 && i<=mid)++i;
        while((arr[j]&1)==0 && j<=(n-1)) ++j;
        if(i<mid && j<(n-1))  swap(arr[i],arr[j]);
        else 
        if((arr[i]&1)==0 && (arr[j]&1)!=0) swap(arr[i],arr[j]);
    }
    printing(arr,n);
    return 0;
}
