#include<bits/stdc++.h>
using namespace std;

int odd_one_out(int *arr,int n){
    int ans=0;
    for(int i=0;i<n;++i){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<odd_one_out(arr,n);
    return 0;
}
// XOR   ^ 
//   2^7     2^6   2^5    2^4    2^3   2^2  2^1  2^0
//   128     64     32     16     8     4     2    1


//    0       0      0      0     1     0     0    1  =9



//    0       0      0      0     0     0     1    0  = 2
 //                               0     0     0    0  =9 
  //                             
 //                               0     0     1    0  =2
 //                                               0      
//   Xor  swap add subtract  
//      xor    1  0  =  1  
//              1  1 =0
 //             0 0 =0