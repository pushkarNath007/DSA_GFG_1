#include<bits/stdc++.h>
using namespace std;

int main(){

    //     2   3   5     1   4    6
      /* left                    right
               l                   r
            2   6   5   1    4     3
                    l        r
            2   6   4    1   5     3
                         l    
                    r     

                left<=right
      */
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;++i){
         cin>>arr[i];
     }
     int left=0,right=n-1;
     while(left<=right){

         if((arr[left]&1)==0) ++left;// arr[left]%2==0 
         if((arr[right]&1)!=0) --right;
         if((arr[left]&1)!=0 &&(arr[right]&1)==0  && left < right) swap(arr[left],arr[right]);
     }
     sort(arr,arr+left);
     sort(arr+left,arr+n);
     for(auto x:arr) cout<<x<<" ";
    return 0;
}
