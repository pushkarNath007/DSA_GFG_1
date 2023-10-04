#include<bits/stdc++.h>
using namespace std;

void printing(vector<int>arr,int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int max_index(int*arr,int n){
     vector<int>left(n);
       vector<int>right(n);
       left[0]=arr[0],right[n-1]=arr[n-1];
       for(int i=1;i<n;++i){
           left[i]=min(arr[i],left[i-1]);
       }
       for(int i=n-2;i>=0;--i){
           right[i]=max(right[i+1],arr[i]);
       }
       printing(left,n);
       printing(right,n);
       int i=0,j=0;
       int count=0,maxcount=0;
       while(i<=j&&j<n){

           if(j==n-1){
               if(arr[i]<=arr[j])
                count=(j-i);
            else{
                count=((j-1)-i);
            }
            maxcount=max(count,maxcount);
            break;
           }
          else if((left[i]>right[j])){
              count=((j-1)-i);
              ++i;
          }
          else ++j;
          maxcount=max(count,maxcount);
       }
       return maxcount;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_index(arr,n);
    return 0;
}
