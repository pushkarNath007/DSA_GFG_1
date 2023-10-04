#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int sum=0,hint=0;
    for(int i=0,j=0;j<n && i<=n;){
        if(sum==k){
            cout<<"("<<j<<" "<<i-1<<") ";
            hint =1;
            exit(0);
        }
        else if(i==n){
            sum-=arr[j++];
        }
        else if(sum<k) sum+=arr[i++];
        else sum-=arr[j++];
        
    }
    if(hint==0) cout<<"Not Found";

    return 0;
}
/* if sum > k then we need to decrease our sum  by minus the values 
else if sum< k  then means we need to increase the sum means our subarray  is less at this point

one extraa codition is there suppose  by adding  whole array and our sum is still  less than  k
here  one condition can be there that there can be a negative value betwen the values
 so  in this case  we will simply minus every value till j reach or equal to n
 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     int n,k;
     scanf("%d %d",&n,&k);
     int arr[n];
     for(int i=0;i<n;++i) scanf("%d",&arr[i]);
     int sum=0;
     int flag =0;
     for(int i=0,j=0;i<=n&&j<n;){
         if(sum==k){
             printf("( %d %d)",j,i-1);
             flag =1;
             exit(0);
         }
         else if(i==n)  sum-=arr[j++];//
          else if(sum>k)  sum-=arr[j++];
          else sum+=arr[i++];  
         
     }

     if(flag ==0) printf("Not found");
     return 0;
 }
 */

   /* 3   4   2   1  2   4  6
    


   */