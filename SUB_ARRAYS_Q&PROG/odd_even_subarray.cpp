/*
//longest even odd subarray

int longeveodd(int array[], int n){
    int res = 1;
    int count = 1;
    for(int i = 1; i < n; i++){
        if((array[i]%2==0 && (array[i-1]%2!=0) || array[i]%2!=0 && array[i-1]%2==0)){
            count++;
            res = max(res, count);
        }
        else
        {
            count = 1;
        }
    }
    return res;
}   3     1
/*     1 3 5 6 8 9 10 12 14 4 6 7
*/
#include<bits/stdc++.h>
using namespace std;

int subarray(int *arr,int n){
    
    int count=0,maxcount=0;
    if((arr[0]%2)!=0) count=1;
    for(int i=1;i<n;++i){
        if((arr[i]&1)!=0){
            if((arr[i-1]&1)!=0) ++count;
            else count=1;
        }
        maxcount=max(count,maxcount);// 3
    }
    return maxcount;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<subarray(arr,n);
    return 0;
}
