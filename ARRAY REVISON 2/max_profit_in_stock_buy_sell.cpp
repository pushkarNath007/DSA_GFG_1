#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int diff=0,res=0,min=arr[0];
    for(int i=1;i<n;++i){
        if(arr[i]<arr[i-1]){
            min=arr[i];
        }
        else{
            diff=arr[i]-min;
            res=max(res,diff);
        }
    }
    cout<<res<<endl;
    return 0;
}
/*
#include<stdio.h>
#include<cstdlib>
using namespace std;
#define max(a,b) ((a>b)?a:b)
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *) malloc(n*sizeof(int));
    for(int i=0;i<n;++i) scanf("%d",&arr[i]);
    int diff=0;
    int buy=arr[0];
    int res=0;
    for(int i=1;i<n;++i){
        if(arr[i]<=arr[i-1]){
            buy = arr[i];
        }
        else{
            diff=arr[i]-buy;// 3-2 =1// 7-2=5// 11-4 =7
            res =max(diff,res);// 1// 5//7//
        }
    }
    printf("\n%d",res);

    return 0;
}*/

