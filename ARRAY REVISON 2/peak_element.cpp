#include<bits/stdc++.h>
using namespace std;
// the elemt which is greate than its neighbour both side element
int peak_element(int *arr,int n){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]) return arr[mid];
        else if(arr[mid]<=arr[mid-1]) right=mid-1;
        else left=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<peak_element(arr,n);
    return 0;
}
/*
1st ->   arr[mid]>arr[mid-1]
2nd->    arr[mid]>arr[mid+1]
          

*/
