#include<bits/stdc++.h>
using namespace std;

void segregate_odd_even(vector<int>&arr){
    int left=0,right=arr.size()-1;
    while(left<right){
        if((arr[left]&1)==0) ++left;
        if((arr[right]&1)!=0) --right;
        if((arr[left]&1)!=0 && (arr[right]&1)==0 && left< right) swap(arr[left],arr[right]);
    }
   sort(arr.begin(),arr.begin()+(right+1));
   sort(arr.begin()+(right+1),arr.end());
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    segregate_odd_even(arr);
    vector<int>::iterator ptr;
    for(ptr=arr.begin();ptr!=arr.end();++ptr){
        cout<<*ptr<<" ";
    }
    return 0;
}
