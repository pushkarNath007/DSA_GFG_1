#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int diff =INT_MIN;
    int count=0;
    int maxcount=0;
    for(int i=1;i<n;++i){
        if(arr[i]-arr[i-1]==diff) ++count;
        else{
            diff=arr[i]-arr[i-1];
            count =2;
        }
        maxcount=max(count,maxcount);
    }
 cout<<maxcount<<endl;
    return 0;
}
  //   k=6   count=7-1=6
  //  2 3 4 5 6 7 8
