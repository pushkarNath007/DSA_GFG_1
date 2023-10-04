#include<bits/stdc++.h>
using namespace std;
void stock_span_prob(int *arr,int n){
    int hint=0;
    int buy=0;
    for(int i=1;i<=n;++i){
        if(hint==0 &&arr[i]>arr[i-1]){
            buy=i-1;
            hint =1;
        }
        else if(hint ==1 &&(arr[i]<arr[i-1] ||i==n)){
            cout<<buy<<" "<<i-1<<" ";
            hint =0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i]; 
    stock_span_prob(arr,n);  
    return 0;
}
