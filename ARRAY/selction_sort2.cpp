#include<iostream>
#include<algorithm>
#include"selection_sort.cpp"
using namespace std;

void selection_2_sort(long int *arr,int size){
    for(int i=0;i<size-1;++i){
    for(int j=size-1;j>=1+i;--j){
        if(arr[j]<arr[i]) swap(arr[j],arr[i]);
    }
    }
}
int main(){
    long int arr[10];
    cout<<"Enter the array element\n";
    for(int i=0;i<10;++i){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(int);
    printing(arr,size);
    selection_2_sort(arr,10);
    printing(arr,size);
    return 0;
}
