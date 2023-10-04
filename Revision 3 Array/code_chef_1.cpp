#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int ans=0;
    while(n!=0){
        ans=(ans*10)+(n%10);
        n/=10;
    }
    return ans;
}
int power(int n,int k){
    int ans=0;
    int curr=n;
    for(int i=1;i<k;++i){
            curr=(curr*curr)%10;
    }
    return curr;//  3  
                // 4
                // 
}
string fact(int n,int k){
    int carry=0;
    int ans=0;
   
    while(n!=0){
        int last=n%10;
         int digit=power(last,k);
         ans=(digit%10)+(ans*10);
         
         n/=10;
    }
   
   cout<<ans<<endl;
   if(ans%7==0) return "YES";
   return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     cout<<fact(n,k)<<endl;
    }
    return 0;
}
/*
            142
    carry =0;
    last=2;
    digit=16+0=16
    ans=6
    carry=1
    14
    last=4
    digit=64
    2^5

*/