#include<bits/stdc++.h>
using namespace std;

int possible_traingles(int *arr,int n){
    int count =0;
    for(int i=n-1;i>=2;--i){
        int right=i-1;
        int left=0;
        while(left<right){
            if(arr[left]+arr[right]>arr[i]){
                count+=right-left;
                --right;
            }
            else ++left;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<possible_traingles(arr,n);
    return 0;
}
