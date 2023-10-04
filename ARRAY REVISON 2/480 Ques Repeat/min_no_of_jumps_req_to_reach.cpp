#include<bits/stdc++.h>
using namespace std;

int minimum_jumps(int *arr,int n){
    int flag=0;// because our first flag point is 0 where we will get next check point
    int jump=0;
    int sum=0;
    if(arr[0]==0 && n==1) return 1;
    if(arr[0]==0 && n>1) return 0;
    for(int i=0;i<n;++i){
        sum=max(sum,i+arr[i]);
        if(i<flag &&sum>=n-1){
            return ++jump;
        }
        else if(i==flag){
            flag=sum;
            sum=INT_MIN;
            ++jump;
        }
    }
    if(flag<n-1) return -1;
    return jump;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<minimum_jumps(arr,n);
    return 0;
}
//  1 3 5 8 9 2 6 7 6 8 9
/*



*/