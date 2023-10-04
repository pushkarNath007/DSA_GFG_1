#include<bits/stdc++.h>
using namespace std;

pair<int,int> find_odd(int *arr,int n){
   int xxor=0;
   for(int i=0;i<n;++i){
       xxor^=arr[i];
   }
   int a=0,b=0;
   int rsb=(xxor)&(-xxor);
   for(int i=0;i<n;++i){
       if((arr[i]&rsb)==0){
           a^=arr[i];
       }
       else b^=arr[i];
   }
   pair<int,int>ans{a,b};
   return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    pair<int,int>ans=find_odd(arr,n);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}
