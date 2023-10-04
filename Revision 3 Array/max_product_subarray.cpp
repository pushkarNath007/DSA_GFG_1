#include<bits/stdc++.h>
using namespace std;
long long max_product_subarray(int *arr,int n){
    long long leftpro=1,rightpro=1,maxleft=0,maxright=0;
    int hint=0;
    for(int i=0;i<n;++i){
        if(arr[i]==0) leftpro=1;
        else{
             leftpro*=arr[i];
             hint=1;
        }
        maxleft=max(maxleft,leftpro);
    }
    if(hint==0) maxleft=0;
    hint=0;
    for(int i=n-1;i>=0;--i){
        if(arr[i]==0) rightpro=1;
        else{
             rightpro*=arr[i];
             hint=1;
        }
        maxright=max(maxright,rightpro);
    }
    if(hint==0) maxright=0;
    return max(maxright,maxleft);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_product_subarray(arr,n)<<endl;
    return 0;
}
/*
 int a=6;
 a{6};
*/