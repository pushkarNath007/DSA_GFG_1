#include<bits/stdc++.h>
using namespace std;
void printing(vector<int>arr){
        for(int i=0;i<arr.size();++i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
void left(vector<int>&leftarr,int n,int *arr){
        int maxi=arr[0];
        leftarr[0]=arr[0];
        for(int i=1;i<n;++i){
            maxi=max(arr[i],maxi);
            leftarr[i]=maxi;
        }
        printing(leftarr);
    }
    void right(vector<int>&rightarr,int n,int *arr ){
        int maxi=arr[n-1];
        rightarr[n-1]=maxi;
        for(int i=n-2;i>=0;--i){
            maxi=max(maxi,arr[i]);
            rightarr[i]=maxi;
        }
        printing(rightarr);
    }
    long long trappingWater(int arr[], int n){
        vector<int>leftarr(n);
        vector<int>rightarr(n); 
        left(leftarr,n,arr);
        right(rightarr,n,arr);
        int diff=0;
        for(int i=1;i<n-1;++i){
           diff+= (min(leftarr[i],rightarr[i]))-arr[i];
        }
        return diff;
    }

    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<trappingWater(arr,n);
    return 0;
}
