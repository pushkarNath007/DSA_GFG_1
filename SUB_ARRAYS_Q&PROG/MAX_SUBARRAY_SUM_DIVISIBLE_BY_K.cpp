#include<bits/stdc++.h>
using namespace std;

int subarray_divisible_k(int *arr,int n,int k){
    // positive integer  k=4
//index -1  0  1  2  3  4  5   6   7   8  9 

    //  -1  3  2  4  5  9  6   4   2   1  3  <-array elemnt
 // sum-    3  5  9 14 23  29  33  35 36  39
 // rem- 0  3  1     2     1   1   3   0  3

// 8 - -1=9
 // count =1;4_>5 ->9

 // negative elements  - > add k in negative remainder
 unordered_map<int,int>ans;
 ans[0]=-1;
 int sum=0;
 int count =0;
 int maxcount =INT_MIN;
 for(int i=0;i<n;++i){
     sum+=arr[i];
     int rem=sum%k;
    if(rem<0) rem+=k;// -3 +4 =1  -3+4=1
     if(ans.find(rem)!=ans.end()){
         count=i-ans[rem];
         maxcount=max(maxcount,count);
     }
     else{
        ans[rem]=i;
     }
 }
    return maxcount;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<subarray_divisible_k(arr,n,k);
    return 0;
}
//   3 -2  1 -3 4 -1 5 2  3
//   3  1  2 -1 3  2 7 9  12
//   3  1  2  4 3    2    2