#include<bits/stdc++.h>
using namespace std;

int partition(char *arr,int left,int right){
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
void quicksort(char *arr,int left,int right){
    if(left<right){
        int pivot=partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }
}
void printing(char*arr,int n){
    cout<<endl;
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";
        }
}
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    quicksort(arr,left,right);
    printing(arr,n);
    return 0;
}
