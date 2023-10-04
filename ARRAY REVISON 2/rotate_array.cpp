/* if u have to rorate a part in its order then */
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int left,int right){
    while(left<right){
        swap(arr[left++],arr[right--]);
    }
}
void  rotate_array(vector<int>&arr,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,arr.size()-1);
    reverse(arr,0,arr.size()-1);
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    rotate_array(arr,k);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}
