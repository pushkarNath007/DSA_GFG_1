#include<bits/stdc++.h>
using namespace std;
//#define N 1e6+5
int main(){
    
        int n;
        cin>>n;
        int arr[n];
        int m;
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        m=arr[0];
        //int m = 1e6+2;//  1.0 * 10 ^6 +5   e6 = 10^6 and 1e = 1.0 * 10 ^6+5 = 1000005;
        for(int i=1;i<n;++i){
            m=max(m,arr[i]);
        }
        int arr1[m];
        int count=0;
        for(int i=0;i<n;++i){// to initialize our array with -1;
             arr1[(arr[i])]=0;
        }
        for(int i=0;i<n;++i){
            ++arr1[(arr[i])];
            if(arr1[arr[i]]==2) ++count;
        }
        cout<<count<<endl;
  
    return 0;
}
