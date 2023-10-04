#include<bits/stdc++.h>
using namespace std;
void median_of_two_sorted_arrays(int *arr,int *ptr,int n,int m){
    int total=n+m;
    int mid;
    int left=-1;
    if((total&1)!=0){
         mid=total/2;
         if(mid>=n){
             mid=mid-n;
             cout<<ptr[mid];
         }
    }
    else {
        mid=total/2;
        left=mid-1;
    } 
    
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int ptr[m];
    for(int i=0;i<m;++i) cin>>arr[i];
    median_of_two_sorted_arrays(arr,ptr,n,m);
    return 0;
}
