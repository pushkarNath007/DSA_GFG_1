//here we have to calculate the maximum profit till that time 
// byb calculating the min till that own index and also
//make sure to do something for in case 
// another small element comes between
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0l;i<n;++i){
        cin>>arr[i];
    }
    int mini=arr[0];
    int diff=0;
    for(int i=0;i<n;++i){
        if(arr[i]<arr[i-1]){
            mini=arr[i];
        }
        else{
            mini=min(mini,arr[i]);
            diff=max(arr[i]-mini,diff);
        }
    }
    cout<<diff<<endl;
    return 0;
}
