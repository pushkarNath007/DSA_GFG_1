#include<bits/stdc++.h>
using namespace std;
int max_sum(int *arr,int n){
    int sum=0,productsum=0,maxsum=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        productsum+=(arr[i]*i);
    }
    maxsum=productsum;
    for(int i=1;i<n;++i){
        int diff=sum-arr[i-1];
        productsum=(productsum-diff)+(arr[i-1]*(n-1));
        maxsum=max(maxsum,productsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_sum(arr,n);
    return 0;
}
/*       0  1  2   3
         8  3  1   2  =11 -> 5+24=29
                           14-8=6
            3-3  2-2   6-2=4
         0  1  2   3       4 
         3  1  2   8 = 29-11=18+9=27

         8 3 1
         3 1 8
         1 8 3
         8 3 1
*/
