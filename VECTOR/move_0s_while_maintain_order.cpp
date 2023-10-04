#include<bits/stdc++.h>
using namespace std;

void  move_all_0s_while_maintaining_order_of_nonzero(vector<int>&arr){
    for(int i=0,j=0;i<arr.size()&&j<arr.size();){
        if(arr[i]!=0) ++i,++j;
        else if(arr[j]==0) ++j;
        else swap(arr[i],arr[j]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int > arr(n);
    int ele;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    move_all_0s_while_maintaining_order_of_nonzero(arr);
    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
