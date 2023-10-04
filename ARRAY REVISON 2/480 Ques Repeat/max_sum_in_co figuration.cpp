// we can only rotate any no of times and we have to
// find the max sum sum of i*a[i];
#include<bits/stdc++.h>
int max_sum_in_configuration(int *arr,int n){
    int sum=0;
    int maxsum=0;
    int total=0;
    for(int i=0;i<n;++i){
        total+=i*arr[i];
        sum+=arr[i];
    }
    maxsum=total;
    for(int i=1;i<n;++i){
        total=total-(sum-arr[i-1])+arr[i-1]*(n-1);
        maxsum=std::max(maxsum,total);
    }
    return maxsum;
}
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) std::cin>>arr[i];
    std::cout<<max_sum_in_configuration(arr,n)<<std::endl;
    return 0;
}
