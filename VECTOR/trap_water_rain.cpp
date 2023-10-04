#include<bits/stdc++.h>
using namespace std;

int trap_water_rain(vector<int>&arr){
    vector<int>leftmax(arr.size());
    vector<int>rightmax(arr.size());
    leftmax[0]=arr.front();
    rightmax[rightmax.size()-1]=arr.back();
    int maxi=arr.front();
   for(int i=1;i<arr.size();++i){
       maxi=max(maxi,arr[i]);
       leftmax[i]=maxi;
   }
   maxi=arr.back();
   for(int i=arr.size()-2;i>=0;--i){
       maxi=max(maxi,arr[i]);
       rightmax[i]=maxi;
   }
   int sum=0;
   for(int i=1;i<arr.size()-1;++i){
       sum+=(min(leftmax[i],rightmax[i]))-arr[i];
   }
   return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<trap_water_rain(arr)<<endl;
    return 0;
}
