/*
    sum=0;
    i   i   i  i
    2   5   3  12    8   2
    total =32  -2 =30 -5 =25 -3=22 -12 =10
    sum=0+2=2+5=7 +3=10
    i+1;

    
    int maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi,arr[i]);
    }
    
    //    3 4 5 2 5

    // count the maximum repeating
     

     1 1 2 2 2 3 3 3 3 3 4 4 4
    int count =1;
    int maxcount =0;
     for(int i=1;i<n;++i){
            if(arr[i]==arr[i-1])++count;
            else count=1;
            maxcount=max(count,maxcount);
     }
     return maxcount;
    
    arr=  2 5 1 3 4
    k = 2;
      1 3 4 2 5

      void reverse(int *arr,int left,int right){
       arr[3]={   1, 2, 3};
        int left =0,right=n-1;
        while(left<right){  // 2 value min to min required 
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        int rotate(int arr[],int n,int k){
            reverse(arr,0,k-1);
            reverse(arr,k,n-1);
            reverse(arr,0,n-1);
        }
      }

*/
#include<bits/stdc++.h>
using namespace std;

void reverse(int *arr,int left,int right){
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
void rotate(int *arr,int n,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    rotate(arr,n,k);
    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    return 0;
}
