#include<bits/stdc++.h>
using namespace std;
void addition(int arr[],int n){
    int left=0;
    int right=n-1;
    int sum=0;
    while(left<=right){
        if(left==right) sum+=arr[left++];
        else {
            sum+=arr[left++];
            sum+=arr[right--];
        }

    }
    cout<<sum<<endl;
}
void arr_product(int arr[],int n){
    int left=0;
    int right=n-1;
    int product=1;
    while(left<=right){
        if(left==right) product*=arr[left++];
        else {
            product*=arr[left++];
            product*=arr[right--];
        }

    }
    cout<<product<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    
     addition(arr,n);
     arr_product(arr,n);
    return 0;
}
