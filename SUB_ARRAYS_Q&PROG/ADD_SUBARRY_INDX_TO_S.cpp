/*
here we have to find the  start position ( indx+1 ) from where
till end position  all values sum == d which user mention
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    int sum=0;
    int ans =0;
    for(int i=0,j=0;i<n && i<=j;){
       if(sum<d) sum+=arr[j++];
       else if(sum==d){
           ans=1;
           cout<<i<<" "<<j-1;
           break;
       }
       else  sum-=arr[i++];
        
        
    }
    if(ans==0) cout<<"didnt find any subarrays whose sum is equal\n";
    return 0;
}
/*
dry run 
            1   2 3 9 21 23 25 4     sum = 0 , d=30
           i j                       sum = 1 +2 +3 +9 +21=36 so 36 > 30 so
           sum( 36 )> 30 
           so 
           1   2   3  9   21    23    25  4
           i              j                   =   36 - 1= 35 // 
           1   2   3  9   21    23    25  4
               i           j                  =    36 - 2 =33 
           1   2   3  9   21    23    25  4
                   i       j                  =  33 - 3 =30//

                   so  i +1 = 3 to j+1 = 5
*/