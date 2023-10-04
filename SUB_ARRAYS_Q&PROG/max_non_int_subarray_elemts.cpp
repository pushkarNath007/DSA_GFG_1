#include<bits/stdc++.h>
using namespace std;
vector<int>non_integere(int *arr,int n){
int maxi=-1,res=-1;
	 vector<int>ans;
     int start=-1,end=-1;
	 for(int i=0;i<n;++i){
	     if(arr[i]>=0){
	        if(maxi==-1){
                 maxi=arr[i];
                 res=max(res,maxi);
                 start=i;
                 if(i==n-1) end=i;
            }
	        else{
	        maxi=max(arr[i],maxi+arr[i]);
	        res=max(res,maxi);
	        }
	     }
	     else{
              maxi=-1;
         }
	 }
     
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    vector<int>ans=non_integere(arr,n);
    for(auto x:ans) cout<<x<<" ";
    return 0;
}
