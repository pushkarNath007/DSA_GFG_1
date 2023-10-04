#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int first_maximum(vector<int >&n){
    int maxi=INT_MIN;
    for(int i=0;i<n.size();++i){
        maxi=max(n[i],maxi);
    }
    return maxi;
}
int second_maximum(vector<int>&arr,int first){
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();++i){
        if(arr[i]==first) continue;
        maxi=max(arr[i],maxi);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int first=first_maximum(arr);
    int second=second_maximum(arr,first);
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();++i){
        if(arr[i]==first || arr[i]==second) continue;
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
    
    return 0;
}
