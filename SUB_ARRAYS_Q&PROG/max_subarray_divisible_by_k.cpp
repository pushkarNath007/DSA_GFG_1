#include<bits/stdc++.h>
using namespace std;
int subarray_divisible_by_k(int *arr,int n,int k){
    // for positive numbers->
        // k=6
//index  -1  0   1   2   3   4   5   6   7   8   9  10
    //ele-   2   7   5   6   3   7   4   2   7   1   2
  // sum= 0  2   9  14  20  23  30  34  36  43  44  46
 //  rem= 0  2   3          5        4   0   1       4
 // count =  2 ->6->8->9

 /*  for negative number->
    // k =4
//index -1  0   1   2   3   4   5   6   7   8   9  10
// ele->   -2  -3   2   4   3   2   1   4   4   2   4
// sum   0 -2  -5  -3   1   4   6   7   11  15  17  21
// rem   0 -2  -1  -3   1       2   3   3   3       1
// add k    2   3   1
 */ // count =5->7 -> 8
 // graph              -  -  -  -  - - - - - - - - - 
 //                   -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7
 //  k =4   here diff between 1 and -3 is 4 
 // when our sum cumes in negative simple add k in that sum and store 
 // the remainder
    int sum=0;
    unordered_map<int,int>ans;
    ans[0]=-1;
    int count =0;
    int maxcount=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        int rem=sum%k;
        if(ans.find(rem)!=ans.end()){
            count =i-ans[rem];
            maxcount=max(maxcount,count);
        }
        else{
            if(rem<0) rem+=k;
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
    cout<<subarray_divisible_by_k(arr,n,k)<<" ";
    return 0;
}
