#include<bits/stdc++.h>
using namespace std;

int equilibrium_point(vector<int>&arr){
    int sum=0;
    for(int i=0;i<arr.size();++i){
        sum+=arr[i];
    }
    int rightsum=0;
    for(int i=0;i<arr.size();++i){
        sum-=arr[i];
        if(rightsum==sum){ 
            return i+1;
        }
        rightsum+=arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();++i){
        cin>>arr[i];
    }
    cout<<equilibrium_point(arr)<<endl;
    return 0;
}
