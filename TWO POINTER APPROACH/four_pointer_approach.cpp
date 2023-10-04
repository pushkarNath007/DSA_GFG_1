#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int left=0;
    for(int i=n-1;i>=3;--i){
        int j=i-1;
        while(j>left){
        
        int right=j-1;
        int res=k-(arr[i]+arr[j]);
        while(left<right){
           int sum=arr[left]+arr[right];
           if(sum==res){
               cout<<"YES"<<endl;
               cout<<i<<" "<<j<<" "<<left<<" "<<right<<" "<<endl;
               exit(0);
           } 
           else if(sum<res) ++left;
           else --right;
        }
        --j;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
