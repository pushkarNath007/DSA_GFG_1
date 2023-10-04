#include<bits/stdc++.h>
using namespace std;


int finding_min(int*arr,int n){
    int left=0;
    int right=n-1;
    int mini=INT_MAX,mini1=INT_MAX;
    while(left<=right){
        if(left==right) mini=min(mini,arr[left++]);
        else{
            mini=min(mini,arr[left++]);
            mini1=min(mini1,arr[right--]);
        }
        
    }
    mini=min(mini1,mini);
        return mini;
}

int finding_max(int *arr,int n){
    int left=0;
    int right =n-1;
    int maxi=INT_MIN,maxi1=INT_MIN;
    while(left<=right){
        if(left==right) maxi=max(maxi,arr[left++]);
        else{
            maxi=max(maxi,arr[left++]);
            maxi1=max(maxi1,arr[right--]);
        }
    }
    maxi=max(maxi,maxi1);
    return maxi;
}
void finding(int *arr,int n){
    cout<<finding_max(arr,n)<<endl<<finding_min(arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
     finding(arr,n);
     
    return 0;
}
