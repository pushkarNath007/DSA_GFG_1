// maximum count of consecutive 1 and u can convert 0 to 1 continously till k times 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int count =0;
    int zero=0;
    int maxcount=0;
    for(int i=0,j=0;i<n;++i){
      if(arr[i]==0) ++zero;
      ++count;
      while(zero>k){
          if(arr[j++]==0) --zero;
          --count;
      }
      maxcount=max(count,maxcount);
       
    }
    cout<<maxcount<<endl;
    return 0;
}
/*
        1 0 0 0 0 1 1 0 0 1 0 1 0 0
        i i i i i                          count =5; zero=4
        j
        here zero >k  


        while(zero>k)
        1 0  0 1 0 1 0 0
                i                          count =5; zero=4
        j j                               count =5-1=4-1=3;  zero=3                                  
*/