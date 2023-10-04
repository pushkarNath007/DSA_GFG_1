#include<bits/stdc++.h>
using namespace std;

void leftarr_max(int *arr,int *leftarr,int n){
    int maxi=arr[0];
    leftarr[0]=maxi;
    for(int i=1;i<n-1;++i){
        maxi=max(arr[i],maxi);
        leftarr[i]=maxi;
    }
}
void rightarr_max(int *arr,int *rightarr,int n){
     int maxi=arr[n-1];
     rightarr[n-1]=maxi;
     for(int i=n-2;i>=1;--i){
         maxi=max(maxi,arr[i]);
         rightarr[i]=maxi;
     }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int rightarr[n],leftarr[n];
    leftarr_max(arr,leftarr,n);
    rightarr_max(arr,rightarr,n);
    // now we got left most and right most elemnt till each index now 
    int ans=0;
    for(int i=0;i<n-1;++i){
        ans+=(min(rightarr[i],leftarr[i]))-arr[i];
    }
    cout<<ans<<endl;
    return 0;
}






/*
int trapprainwater(int array[], int n){
    int res = 0;
    for(int i = 1; i < n; i++){
        int leftmax[n];
        int rightmax[n];
        leftmax[0] = array[0];
        for(int i = 1; i < n; i++){
            leftmax[i] = max(array[i], leftmax[i-1]);
        }
        rightmax[n-1] = array[n-1];
        for(int i = n-2; i >= 0; i--){
            rightmax[i] = max(array[i], rightmax[i+1]);
        }

        for(int i = 1; i < n; i++){
            res += (min(leftmax[i], rightmax[i]) - array[i]);
        }
        return res;
    }
    return res;
}
*/