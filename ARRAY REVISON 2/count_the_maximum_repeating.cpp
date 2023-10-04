#include<bits/stdc++.h>
using namespace std;
int max_repeating(int *arr,int n){
    int sum=1, maxsum=1,var=arr[0];
    for(int i=1;i<n;++i){
        if(arr[i]==arr[i-1]){
            ++sum;
            if(sum>(n+1)/2) return var;
            if(sum>maxsum){
                maxsum=sum;
                var=arr[i];
            }
        }
        else sum=1;
    }
    return var;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_repeating(arr,n);
    return 0;
}
/*  7  4
 1 1 1 1 1 2 3

*/