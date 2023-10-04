#include<bits/stdc++.h>
using namespace std;

int minimum_no_jumps_req(int *arr,int n){
    int check=0;
    int jump=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi,i+arr[i]);
        if(maxi>=n-1 &&i<=check){
            ++jump;
            return jump;
        }
        if(i==check){
            check=maxi;
            maxi=INT_MIN;
            jump++;
        }
    }
    if(check<n-1) return -1;
    return jump;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<minimum_no_jumps_req(arr,n);
    return 0;
}
//   2 1 5 3 6 2
/*
 var =0 var++ var=1
     2 2 6 3 5 1
     sort(arr,arr+var);
     sort(arr+var,arr+n);
  
  whose left side is equal to right side
*/