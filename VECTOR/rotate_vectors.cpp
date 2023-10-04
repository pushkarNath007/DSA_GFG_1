#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int left,int right){
    while(left<right){
        swap(arr[left++],arr[right--]);
    }
}
void rotate(vector<int>&arr,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,(arr.size()-1));
    reverse(arr,0,arr.size()-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int k;
    cin>>k;
    rotate(a,k);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}
