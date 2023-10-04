#include<bits/stdc++.h>
using namespace std;


void multiply(vector<int>&arr,int k){
    int carry=0;
    int temp=0;
    for(int i=0;i<arr.size();++i){
        temp=arr[i]*k+carry;
        arr[i]=temp%10;
        carry=temp/10;
    }
    while(carry){
        arr.push_back(carry%10);
        carry/=10;
    }
}
vector<int>factorial(int n){
    vector<int>arr;
    arr.push_back(1);
    for(int i=2;i<=n;++i){
        multiply(arr,i);
    }
    reverse(arr.begin(),arr.end());
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans=factorial(n);
    for(auto x:ans) cout<<x;
    return 0;
    return 0;
}
