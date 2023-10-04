#include<bits/stdc++.h>
using namespace std;
 int equilibrium_point(int *arr, int n){
     int sum1=0,sum2=0;
     for(int i=0;i<n;++i) sum1+=arr[i];
     for(int i=0;i<n;++i){
         sum2+=arr[i];
         if(sum2==sum1) return arr[i];
         sum1-=arr[i];
     }
     return -1;
     //  11   9  6   
     //      2   5  6
 }
 int equilibrium(int *arr,int n){
     int left=0,right=n-1;
     int sum1=0,sum2=0;
     while(left<=right){
         if(sum1==sum2){
             if(left==right){
                 return arr[left];
             }
             else{
                 sum1+=arr[left++];
                 sum2+=arr[right--];
             }
         }
         else{
             sum1+=arr[left++];
             sum2+=arr[right--];
         }
     }
     return -1;
 }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<</*equilibrium_point(arr,n)*/equilibrium(arr,n);
    return 0;
}
/*  0  1   2  3  4
    2  3   1  2  3
    l            r
    sum1 =2 +3 =5     left+1    1+1=   2
    sum2 =3 +2=5      right-1   3-1 =   2
    sum
*/
/*
  7 3 1 5 2 4
  k =2
  1 5 2 4 7 3

  3 7 
  7 3
  3 7

  3 7  4 2 5 1
  1 5 2 4 7 3
*
/*
  2  2   1   0  1 1 0 2 2 1 0 
  var =0
    i=n

   1 1 1 1 2 2 2 2 2 2 2 3 3 
   for( i to n-1)
   max
   var =arr[i]  
*/