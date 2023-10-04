#include<bits/stdc++.h>
using namespace std;
int count_traingle(int*arr,int n){
    int count=0;
    for(int i=n-1;i>=2;--i){
        int left=0,right=i-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum>arr[i]){
                count+=(right-left);
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
    cout<<count_traingle(arr,n)<<endl;
    return 0;
}
