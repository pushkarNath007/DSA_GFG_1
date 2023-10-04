// we have to find the first repeating  element whose index is smallest
#include<bits/stdc++.h>
using namespace std;

int maximum(int *arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int previous=-1;
    int arr1[(maximum(arr,n))+1];
    for(int i=0;i<n;++i){
        arr1[arr[i]]=-1;
    }
    for(int i=0;i<n;++i){
        if(arr1[arr[i]]!=-1){
            if(previous==-1) previous=arr1[arr[i]];
            else {
                if(arr1[arr[i]]<previous) previous=arr1[arr[i]];
            }
        }
        else arr1[arr[i]]=i;
    }
    cout<<arr[previous]<<endl;
    return 0;
}
