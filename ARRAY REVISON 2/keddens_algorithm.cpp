
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;++i) cin>>arr[i];
   int maxi=arr[0];
   int res=arr[0];
   for(int i=1;i<n;++i){
       maxi=max(maxi+arr[i],arr[i]);
       res=max(res,maxi);
   }
   cout<<res<<endl;

    return 0;
}
 // find the  max sum of subarray and here elemets  can be  negative too
 /*
   
    2  -3  -1 -4  1  -2  2  1
        -4 -5 -2   -2
                   -11
                   -11 =//   0   -2
 */