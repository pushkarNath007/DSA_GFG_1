#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int maxi=INT_MIN;
    int maxi1=INT_MIN;
    int rightarr[n],leftarr[n];
    //rightarr[n-1]=arr[n-1];
    for(int i=n-1;i>=0;--i){
        maxi=max(arr[i],maxi);
        rightarr[i]=maxi;
        maxi1=max(arr[(n-1)-i],maxi1);
        leftarr[(n-1)-i]=maxi1;
    }
    int count =0;
    for(int i=0;i<n;++i){
        count +=(min(rightarr[i],leftarr[i]))-arr[i];
    }
    cout<<count<<endl;
    return 0;
}
/*
    2  0  1  4  0  2
    
*/