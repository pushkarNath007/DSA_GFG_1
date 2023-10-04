// remeber if arrival time is as same as departure time then 
//also it requires extraa platform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], dep[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        cin>>dep[i];
    }
    sort(arr,arr+n);
    sort(dep,dep+n);
    int current=1;
    int ans=1;
    for(int i=1,j=0;i<n ;++i){
        if(dep[j]<arr[i]){
             --current;
             ++j;
        }
        else if(arr[i]<=dep[j]) ++current,++i;
        ans=max(ans,current);
    }
    cout<<ans<<endl;
    return 0;
}
