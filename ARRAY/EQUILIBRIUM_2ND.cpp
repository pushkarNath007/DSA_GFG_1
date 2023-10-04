#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int rightsum=0;
    for(int i=0;i<n;++i){
        rightsum+=arr[i];
    }
    int leftsum=0;
    for(int i=0;i<n;++i){
        leftsum+=arr[i];
        if(leftsum==rightsum) return i+1;
        leftsum-=rightsum;
    }
    return 0;
}
/*
if(n==1) return -1;
    int left=0,right=n-1;
    int sum=0,sum1=0;
    while(left<=right){
        if(sum==0 &&sum1 ==0){
            sum+=arr[left++];
            sum1+=arr[right--];
        }
        else if(sum==sum1){
            if(left==right) return left;
            sum+=arr[left++];
            sum1+=arr[right--];
         }
        else if(sum>sum1) sum1+=arr[right--];
        else sum+=arr[left++];
    }
    return -1;
    */
